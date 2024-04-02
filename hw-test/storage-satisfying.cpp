#include "storage-satisfying.h"

StorageSatisfying::StorageSatisfying(long c)
    : cap(c)
{
}

long StorageSatisfying::capacity()
{
    return cap;
}
