#ifndef PROCESS_H
#define PROCESS_H

#include <QWidget>
#include<QPushButton>

namespace View
{
class Process : public QWidget
{
    Q_OBJECT
public:
    explicit Process(QWidget *parent = 0);
    
signals:
    void singalToMenu();
    
public slots:
    void toMainMenu();
    void toExit();
    
};
}

#endif // PROCESS_H
