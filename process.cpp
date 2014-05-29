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

        QPushButton *btn_start_for_decision = new QPushButton("Start for decision",this);
        btn_start_for_decision->setGeometry(20,10,140,70);
        connect(btn_start_for_decision,SIGNAL(clicked()),this,SLOT(startForDecision()));

        skeletization = new Skeletization();
        tracking = new Tracking();

        algo = new AlgoManager(skeletization,tracking);

    }

    //переход в главное меню
    void Process::toMainMenu()
    {
        toMain=true;
        this->close();
        emit singalToMenu();
    }

    //выход из программы
    void Process::toExit()
    {
        exit(11);
    }

    //установка выбранной камеры
    void Process::setCamera(int cameraNumber)
    {
        cameraNum = cameraNumber;
    }

    //тут вся обработка изображения
    void Process::startProcess()
    {
        capture = NULL;
        toMain = false;

        isStart = false;
        bool isFirstToTrack = true;

        //capture = cvCaptureFromCAM(cameraNum);
        capture = cvCaptureFromFile("test7.webm");

        cv::Mat curr_frame, skeleton;

        cv::namedWindow("Your movements");

        cv::moveWindow("Your movements",460,50);

        int count = 1;

        while(true)
        {

            if (count%2==0)
            {
                count++;
                continue;
            }

            if (toMain)
            {
                cv::destroyAllWindows();
                cvReleaseCapture(&capture);
                break;
            }



            curr_frame = cvQueryFrame(capture);

            //skeletization
            if (count==1)
            {
                algo->skeletization(true,curr_frame,skeleton);
                count++;
                continue;
            }

            algo->skeletization(false,curr_frame,skeleton);

            count++;

            //tracking and draw
            if (isStart)
            {
                algo->tracking(isFirstToTrack,skeleton,data);
                isFirstToTrack = false;
            }

            cv::ellipse(curr_frame,cv::Point(data.getPosLH().x*2,data.getPosLH().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0));
            cv::ellipse(curr_frame,cv::Point(data.getPosRH().x*2,data.getPosRH().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0));

            cv::ellipse(curr_frame,cv::Point(data.getPosLE().x*2,data.getPosLE().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0));
            cv::ellipse(curr_frame,cv::Point(data.getPosRE().x*2,data.getPosRE().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0));

            cv::imshow("Your movements",curr_frame);

            char key = cvWaitKey(1);
            if (key==27)break;

        }
    }

    void Process::startForDecision()
    {
        isStart = true;
    }
}
