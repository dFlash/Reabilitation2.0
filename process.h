#ifndef PROCESS_H
#define PROCESS_H

#include <QWidget>
#include<QPushButton>
#include"algomanager.h"
#include"skeletization.h"

using namespace Algorithms;

namespace View
{
class Process : public QWidget
{
    Q_OBJECT
public:
    explicit Process(QWidget *parent = 0);
    void setCamera(int cameraNumber);
    
signals:
    void singalToMenu();
    
public slots:
    void toMainMenu();
    void toExit();
    void startProcess();

    void startForDecision();

private:
    int cameraNum;
    IAgorithm* algo;
    ISkeletization* skeletization;

    CvCapture* capture;//захват видео с камеры
    bool toMain;//проверка для перехода в главное меню

    int isStart;
    
};
}

#endif // PROCESS_H
