#ifndef MAINMENU_H
#define MAINMENU_H

#include<QApplication>
#include <QWidget>
#include<QPushButton>
#include"settings.h"


namespace View
{

    class MainMenu : public QWidget
    {
        Q_OBJECT
    public:
        explicit MainMenu(Settings* settings,QWidget *parent = 0);

    signals:
    
    public slots:
        void quit();
        void settings();
        void getCameraNum(int camNum);


    private:
        Settings* setting;
        int cameraNum;

    
    };

}

#endif // MAINMENU_H
