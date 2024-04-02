#include "hd-satisfying.h"

HdSatisfying::HdSatisfying()
    : HwBase{ "hard_drive" }, store{ 100L }
{
}

PowerSatisfying& HdSatisfying::power()
{
    return pow;
}

StorageSatisfying& HdSatisfying::storage()
{
    return store;
}
