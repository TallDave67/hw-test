#include "cam-satisfying.h"

CamSatisfying::CamSatisfying()
    : HwBase{ "camera" }, store{ 17L }, op { 0.25 }
{
}

PowerSatisfying& CamSatisfying::power()
{
    return pow;
}

StorageSatisfying& CamSatisfying::storage()
{
    return store;
}

OpticsSatisfying& CamSatisfying::optics()
{
    return op;
}
