#pragma once
#include <string>

class Camera
{
public:
    Camera();
    std::string name();
    bool is_off();
    bool is_on();
    bool turn_on();
    bool turn_off();
    long capacity();
private:
    std::string nm;
    bool on;
    long cap;
};
