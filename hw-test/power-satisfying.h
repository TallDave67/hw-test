#pragma once
#include <string>

class PowerSatisfying
{
public:
    PowerSatisfying();
    bool is_off();
    bool is_on();
    bool turn_on();
    bool turn_off();
private:
    bool on;
};
