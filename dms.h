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
};

}

#endif // DMS_H
