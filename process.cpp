#include "process.h"
namespace View
{
    Process::Process(QWidget *parent) :
        QWidget(parent)
    {
        this->setFixedSize(200,300);
        this->move(250,150);
        this->setWindowTitle("Reabilitation");

        QPushButton *btn_toMainMenu = new QPushButton("To main menu",this);
        btn_toMainMenu->setGeometry(20,100,140,50);
        connect(btn_toMainMenu,SIGNAL(clicked()),this,SLOT(toMainMenu()));

        QPushButton *btn_exit = new QPushButton("Exit",this);
        btn_exit->setGeometry(20,170,140,50);
        connect(btn_exit,SIGNAL(clicked()),this,SLOT(toExit()));
    }

    void Process::toMainMenu()
    {
        this->close();
        emit singalToMenu();
    }

    void Process::toExit()
    {
        exit(11);
    }

}
