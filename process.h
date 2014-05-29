#ifndef PROCESS_H
#define PROCESS_H

#include <QWidget>
#include<QPushButton>
#include<QString>
#include<QLabel>
#include<QFont>
#include <fstream>

#include"algomanager.h"
#include"skeletization.h"
#include"tracking.h"
#include"dms.h"

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
    void startProcess(QString& training);

    void startForDecision();

private:    
    int cameraNum;
    IAgorithm* algo;
    ISkeletization* skeletization;
    ITracking* tracking;
    Idms* decision_make_system;

    CvCapture* capture;//захват видео с камеры
    bool toMain;//проверка для перехода в главное меню

    int isStart;

    Data data;

    QLabel* labelDecision;//для вывода советов
    int lx, ly, rx, ry;//координаты нужных позиций

    QString advice;

    
};
}

#endif // PROCESS_H
