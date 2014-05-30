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

        labelDecision = new QLabel(this);
        labelDecision->setText("NORM");
        labelDecision->setFont(QFont("lucida", 8, QFont::Bold, true));
        labelDecision->setGeometry(20,220,150,60);

        skeletization = new Skeletization();
        tracking = new Tracking();
        decision_make_system = new DMS();

        algo = new AlgoManager(skeletization,tracking,decision_make_system);

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
    void Process::startProcess(QString& training)
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

        QString pathFolder("data/");
        QString path = pathFolder+training;

        std::ifstream infile(path.toStdString().c_str());

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

            cv::ellipse(curr_frame,cv::Point(data.getPosLH().x*2,data.getPosLH().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0),3);
            cv::ellipse(curr_frame,cv::Point(data.getPosRH().x*2,data.getPosRH().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0),3);

            cv::ellipse(curr_frame,cv::Point(data.getPosLE().x*2,data.getPosLE().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0),3);
            cv::ellipse(curr_frame,cv::Point(data.getPosRE().x*2,data.getPosRE().y*2),cv::Size(10,10),100,0,360,cv::Scalar(255,0,0),3);

            //dms
            if(isStart)
            {
                if(lx==-100)
                {
                    toMainMenu();
                }

                infile >> lx >> ly >> rx >> ry;
                Data mustHavedata(lx,ly,rx,ry);
                advice = algo->dms(data,mustHavedata);

                labelDecision->setText(advice);

                cv::ellipse(curr_frame,cv::Point(lx*2,ly*2),cv::Size(10,10),100,0,360,cv::Scalar(255,255,255),3);
                cv::ellipse(curr_frame,cv::Point(rx*2,ry*2),cv::Size(10,10),100,0,360,cv::Scalar(255,255,255),3);

            }
            else
            {
                cv::rectangle(curr_frame,cv::Rect(2,124,100,100),cv::Scalar(0,0,255),2);
                cv::rectangle(curr_frame,cv::Rect(384,80,100,100),cv::Scalar(0,0,255),2);
                cv::rectangle(curr_frame,cv::Rect(98,162,100,100),cv::Scalar(0,0,255),2);
                cv::rectangle(curr_frame,cv::Rect(320,146,100,100),cv::Scalar(0,0,255),2);
            }



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
