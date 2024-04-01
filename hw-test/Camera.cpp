#include "Camera.h"

Camera::Camera()
    : nm("camera"), on(false), cap(17L)
{
}

std::string Camera::name()
{
    return nm;
}

bool Camera::is_off()
{
    return !on;
}

bool Camera::is_on()
{
    return on;
}

bool Camera::turn_on()
{
    if (on) return false;
    on = true;
    return true;
}

bool Camera::turn_off()
{
    if (!on) return false;
    on = false;
    return true;
}

long Camera::capacity()
{
    if (!on) return 0L;
    return cap;
}
