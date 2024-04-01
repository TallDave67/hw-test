#include "HardDrive.h"

HardDrive::HardDrive()
    : nm("hard_drive"), on(false), cap(100L)
{
}

std::string HardDrive::name()
{
    return nm;
}

bool HardDrive::is_off()
{
    return !on;
}

bool HardDrive::is_on()
{
    return on;
}

bool HardDrive::turn_on()
{
    if (on) return false;
    on = true;
    return true;
}

bool HardDrive::turn_off()
{
    if (!on) return false;
    on = false;
    return true;
}

long HardDrive::capacity()
{
    if (!on) return 0L;
    return cap;
}
