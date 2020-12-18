#include "mm.h"

using namespace MM32;

void MMbus::pinMode(int mode) const
{
    for (uint8_t pin : {2, 14, 7, 8, 6, 20, 21, 5})
    {
        ::pinMode(pin, mode);
    }
}

void MMbus::operator=(uint8_t value) const
{
    GPIOD_PDOR = value;
}

MMbus::operator uint8_t() const
{
    return GPIOD_PDIR;
}

namespace MM32
{
    MMbus Bus;
}
