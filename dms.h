#ifndef DMS_H
#define DMS_H
#include"idms.h"

namespace Algorithms
{
class DMS : public Idms
{
public:
    DMS();
    void compare(Data &curData,Data& dataMust);
    QString getDecision();

private:
    int leftHandXdist;
    int leftHandYdist;
    int rightHandXdist;
    int rightHandYdist;
    static const int threshPlus = 1;
    static const int threshMinus = -1;
    bool isNorm;

    QString result;
};

}

#endif // DMS_H
