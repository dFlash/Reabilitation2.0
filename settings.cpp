#include "settings.h"

namespace View
{
Settings::Settings(QWidget *parent) :
    QWidget(parent)
{
    this->setFixedSize(200,200);
    this->move(300,300);
    this->setWindowTitle("Settings");

    QVBoxLayout *layout = new QVBoxLayout();

    //список всех камер
    combo_box = new QComboBox();

    CvCapture* capture = NULL;
    int camInd = -1;
    while(true)
    {
        capture = cvCaptureFromCAM(++camInd);
        if (!capture)
        {
             cvReleaseCapture(&capture);
             break;
        }
        else
        {

            QString msg = QString ("Camera %1").arg(camInd+1);
            combo_box->addItem(msg);
            cvReleaseCapture(&capture);
        }

    }

    combo_box->setGeometry(10,10,100,40);

    layout->addWidget(combo_box);

    QPushButton *btn_ok = new QPushButton("OK",this);
    btn_ok->setFixedSize(177,40);
    layout->addWidget(btn_ok);

    this->setLayout(layout);

    connect(btn_ok,SIGNAL(clicked()),this,SLOT(selectCam()));
}

//установка нужной камеры
void Settings::selectCam()
{
    this->close();
    emit setCameraNum(combo_box->currentIndex());
}


}
