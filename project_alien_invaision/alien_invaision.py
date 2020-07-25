import sys
import pygame
from pygame.sprite import Group
from settings import Settings
from ship import Ship
import game_functions as gf

def run_game():
    #初始化游戏并且创建一个屏幕对象
    pygame.init()
    ai_settings = Settings()
    screen = pygame.display.set_mode((ai_settings.screen_width, ai_settings.screen_height))
    #creat a ship
    ship =Ship(ai_settings,screen)
    #创建一个用于储存子弹的编组
    bullets = Group()
    #创建外星人空编组
    aliens = Group()
    # Create alien fleet
    gf.create_fleet(ai_settings, screen, ship, aliens)
    #游戏主循环
    while True:
        gf.check_events(ai_settings, screen, ship, bullets)
        ship.update()
        gf.update_bullets(ai_settings, screen, ship, aliens, bullets)
        gf.update_aliens(ai_settings, aliens)
        gf.update_screen(ai_settings, screen, ship, aliens, bullets)



if __name__ == "__main__":
   run_game()
