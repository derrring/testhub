import sys
import pygame
from bullet import Bullet
from alien import Alien

def check_keydown_events(event, ai_settings, screen, ship, bullets):
    '''响应按键'''
    if event.key == pygame.K_RIGHT:
        ship.moving_right = True
    elif event.key == pygame.K_LEFT:
        ship.moving_left = True
    elif event.key == pygame.K_SPACE:
        #创造一颗子弹，并将其加入到编组bullets中
        fire_bullet(ai_settings, screen, ship, bullets)
    elif event.key == pygame.K_q:
        sys.exit()

def check_keyup_events(event, ship):
    '''响应松开'''
    if event.key == pygame.K_RIGHT:
        ship.moving_right = False
    elif event.key == pygame.K_LEFT:
        ship.moving_left = False

def check_events(ai_settings, screen, ship, bullets):
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            sys.exit()
        elif event.type == pygame.KEYDOWN:            
            check_keydown_events(event, ai_settings, screen, ship, bullets)
        elif event.type == pygame.KEYUP:
            check_keyup_events(event,ship)

def update_screen(ai_settings, screen, ship, aliens, bullets):
    screen.fill(ai_settings.bg_color)
    #在飞船和外星人后面重绘所有的子弹
    for bullet in bullets.sprites():
        bullet.draw_bullet()
    ship.blitme()
    aliens.draw(screen)
    pygame.display.flip()

def update_bullets(ai_settings, screen, ship, aliens, bullets):
    '''更新子弹的位置，并删除已消失的子弹'''
    #更新子弹的位置
    bullets.update()
    #删除已经消失的子弹
    for bullet in bullets.copy():
        if bullet.rect.bottom <= 0:
            bullets.remove(bullet)
    check_bullet_alien_collision(ai_settings, screen, ship, aliens, bullets)

def check_bullet_alien_collision(ai_settings, screen, ship, aliens, bullets):
    """respond to the collision between bullets and aliens"""
    #check if there is any bullet hit alien, if True, delete both of them
    collisions = pygame.sprite.groupcollide(bullets, aliens, True, True)
    if len(aliens) == 0:
        #delete all bullet on the screen and recreate a new group of alien
        bullets.empty()
        create_fleet(ai_settings, screen, ship, aliens)


def fire_bullet(ai_settings, screen, ship, bullets):
    '''未达到全屏子弹上限时允许发射子弹'''
    #创建新子弹，并将其加入bullets分组中
    if len(bullets) <= ai_settings.bullets_allowed:
        new_bullet = Bullet(ai_settings, screen, ship)
        bullets.add(new_bullet)

############## Part. Creat (a fleet of aliens) ########################
def get_number_alien_x(ai_settings, alien_width):
    """"calculate the  maximum number of aliens each line could contain"""
    available_space_x = ai_settings.screen_width - 2*alien_width
    number_alien_x = int(available_space_x/(2*alien_width))
    return number_alien_x

def create_alien(ai_settings, screen, aliens, alien_number, row_number):
    """create an alien and add it to the current row"""
    alien = Alien(ai_settings, screen)
    alien_width = alien.rect.width
    alien.x = alien_width + 2*alien_width*alien_number
    alien.rect.x = alien.x
    alien.rect.y = alien.rect.height + 2*alien.rect.height*row_number
    aliens.add(alien)

def create_fleet(ai_settings, screen, ship, aliens):
    '''create a fleet of aliens'''
    #create a signle alien and calculate how many aliens could be simutaneously drawed in a row
    alien = Alien(ai_settings, screen)
    number_alien_x = get_number_alien_x(ai_settings, alien.rect.width)
    number_rows = get_number_rows(ai_settings, ship.rect.height, alien.rect.height)
    #create first row of aliens
    for row_number in range(number_rows):
        for alien_number  in range(number_alien_x):
            create_alien(ai_settings, screen, aliens, alien_number, row_number)

def get_number_rows(ai_settings, ship_height, alien_height):
    """calculate the number of rows that a screen could contain"""
    available_space_y = ai_settings.screen_height - 3*alien_height - ship_height
    number_rows = int(available_space_y / (2*alien_height))
    return number_rows

def update_aliens(ai_settings, aliens):
    """check the position of aliens, detect if they toched the edge, 
    update the position of all aliens"""
    check_fleet_edges(ai_settings, aliens)
    aliens.update()

def check_fleet_edges(ai_settings, aliens):
    """actions when alien arrive at the edge"""
    for alien in aliens.sprites():
        if alien.check_edges():
            change_fleet_direction(ai_settings, aliens)
            break

def change_fleet_direction(ai_settings, aliens):
    """shift down all row of aliens and change their moving direction"""
    for alien in aliens.sprites():
        alien.rect.y += ai_settings.fleet_drop_speed
    ai_settings.fleet_direction *= -1

