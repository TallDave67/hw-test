#pragma once
#include <string>

class HwBase
{
public:
    HwBase(std::string n);
    std::string name();
protected:
    std::string nm;
};
