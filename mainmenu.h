#ifndef MAINMENU_H
#define MAINMENU_H

#include<QApplication>
#include <QWidget>
#include<QPushButton>
#include"settings.h"
#include"process.h"


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
        void startProcess();

        void showMenu();


    private:
        Settings* setting;
        int cameraNum;
        Process* process;

    
    };

}

#endif // MAINMENU_H
