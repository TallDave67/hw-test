#pragma once
#include "hw-base.h"
#include "power-satisfying.h"
#include "storage-satisfying.h"
#include "optics-satisfying.h"

class CamSatisfying : public HwBase
{
public:
    CamSatisfying();
    PowerSatisfying& power();
    StorageSatisfying& storage();
    OpticsSatisfying& optics();
private:
    PowerSatisfying pow;
    StorageSatisfying store;
    OpticsSatisfying op;
};
