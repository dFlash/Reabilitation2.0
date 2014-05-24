#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include<QPushButton>
#include<QComboBox>
#include<QVBoxLayout>
#include<QDebug>
#include <opencv/highgui.h>

namespace View
{

class Settings : public QWidget
{
    Q_OBJECT
public:
    explicit Settings(QWidget *parent = 0);
    
signals:
    void setCameraNum(int);
    
public slots:
    void selectCam();

private:
     QComboBox* combo_box;



    
};

}

#endif // SETTINGS_H
