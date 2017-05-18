#ifndef MOCKCALC_H
#define MOCKCALC_H

#endif // MOCKCALC_H
#include "calculation.h"
#include <gmock/gmock.h>
class MockCacl:public Caculation
{
public:
    MOCK_METHOD2(Add,int(int a, int b));
};
