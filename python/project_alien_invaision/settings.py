class Settings():

    def __init__(self):
       '''游戏初始化设置''' 
        #set screen
        self.screen_width = 1200
        self.screen_height = 800
        #注意1200*800分辨率是宽*高，以左上角为原点，X轴正方向是E，Y轴正方向是S
        self.bg_color = (230,230,230)
        #飞船的设置
        self.ship_speed_factor = 1.5 
        #子弹设置
        self.bullet_speed_factor = 1
        self.bullet_width = 3
        self.bullet_height = 15
        self.bullet_color = (60,60,60)
        self.bullets_allowed = 3