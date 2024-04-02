#include "hw-base.h"

HwBase::HwBase(std::string n)
    : nm{ n }
{
}

std::string HwBase::name()
{
    return nm;
}
