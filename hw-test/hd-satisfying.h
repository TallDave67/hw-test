#pragma once
#include "hw-base.h"
#include "power-satisfying.h"
#include "storage-satisfying.h"

class HdSatisfying : public HwBase
{
public:
    HdSatisfying();
    PowerSatisfying& power();
    StorageSatisfying& storage();
private:
    PowerSatisfying pow;
    StorageSatisfying store;
};
