#include "mainmenu.h"

namespace View
{

    MainMenu::MainMenu(Settings* settings,QWidget *parent) :
        QWidget(parent)
    {
        this->setFixedSize(180,350);
        this->move(330,130);

        this->setting = settings;
        connect(setting,SIGNAL(setCameraNum(int)),this,SLOT(getCameraNum(int)));
        cameraNum = 0;//Значение камеры по умолчанию


        QPushButton *btn_start = new QPushButton("Start",this);
        btn_start->setGeometry(10,10,150,70);

        QPushButton *btn_settings = new QPushButton("Settings",this);
        btn_settings->setGeometry(10,180,150,50);
        connect(btn_settings,SIGNAL(clicked()),this,SLOT(settings()));

        QPushButton *btn_exit = new QPushButton("Exit",this);
        btn_exit->setGeometry(10,240,150,50);
        connect(btn_exit,SIGNAL(clicked()),this,SLOT(quit()));
    }

    //выход из программы
    void MainMenu::quit()
    {
        exit(10);
    }

    //переход в настройки
    void MainMenu::settings()
    {
        setting->show();
    }

    //слот получения номера камеры
    void MainMenu::getCameraNum(int camNum)
    {
        cameraNum = camNum;
    }


}
