#include "power-satisfying.h"

PowerSatisfying::PowerSatisfying()
    : on(false)
{
}

bool PowerSatisfying::is_off()
{
    return !on;
}

bool PowerSatisfying::is_on()
{
    return on;
}

bool PowerSatisfying::turn_on()
{
    if (on) return false;
    on = true;
    return true;
}

bool PowerSatisfying::turn_off()
{
    if (!on) return false;
    on = false;
    return true;
}
