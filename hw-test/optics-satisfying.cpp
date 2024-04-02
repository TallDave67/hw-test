#include "optics-satisfying.h"

OpticsSatisfying::OpticsSatisfying(double fl)
    : foc_len(fl)
{
}

double OpticsSatisfying::focal_length()
{
    return foc_len;
}
