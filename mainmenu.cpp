#include "mainmenu.h"

namespace View
{

    MainMenu::MainMenu(Settings* settings,QWidget *parent) :
        QWidget(parent)
    {
        this->setFixedSize(180,350);
        this->move(330,130);
        this->setWindowTitle("Reabilitation");
        QVBoxLayout *layout = new QVBoxLayout();

        this->setting = settings;
        connect(setting,SIGNAL(setCameraNum(int)),this,SLOT(getCameraNum(int)));
        cameraNum = 0;//Значение камеры по умолчанию

        process = new Process();
        connect(process,SIGNAL(singalToMenu()),this,SLOT(showMenu()));


        QPushButton *btn_start = new QPushButton("Start",this);
        btn_start->setGeometry(10,10,150,70);
        btn_start->setFixedSize(157,70);
        connect(btn_start,SIGNAL(clicked()),this,SLOT(startProcess()));
        layout->addWidget(btn_start);

        cmbo_listVideos = new QComboBox();
        QDir *dir = new QDir("./data/");
        QStringList list = dir->entryList();

        for (QStringList::Iterator it = list.begin();it!=list.end();it++)
        {
            QString str = *it;
            if (str.startsWith("train") && !str.endsWith("~"))
            {
                cmbo_listVideos->addItem(str);
            }

        }
        layout->addWidget(cmbo_listVideos);


        QPushButton *btn_settings = new QPushButton("Settings",this);
        btn_settings->setGeometry(10,180,150,50);
        btn_settings->setFixedSize(157,50);
        connect(btn_settings,SIGNAL(clicked()),this,SLOT(settings()));
        layout->addWidget(btn_settings);

        QPushButton *btn_exit = new QPushButton("Exit",this);
        btn_exit->setGeometry(10,240,150,50);
        btn_exit->setFixedSize(157,50);
        connect(btn_exit,SIGNAL(clicked()),this,SLOT(quit()));
        layout->addWidget(btn_exit);

        this->setLayout(layout);
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

    //начать процесс обработки
    void MainMenu::startProcess()
    {
        this->hide();
        process->setCamera(cameraNum);
        process->show();
        QString str = cmbo_listVideos->currentText();
        process->startProcess(str);
    }

    void MainMenu::showMenu()
    {
        this->show();
    }


}
