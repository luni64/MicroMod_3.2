#include "mm.h"

namespace MM32
{
    void BUS::pinMode(int mode) const
    {
        for (uint8_t pin : {2, 14, 7, 8, 6, 20, 21, 5})
        {
            ::pinMode(pin, mode);
        }
    }

    void BUS::operator=(uint8_t value) const
    {
        GPIOD_PDOR = value;
    }

    BUS::operator uint8_t() const
    {
        return GPIOD_PDIR;
    }



    void pinMode(const BUS& bus, int mode)
    {
        bus.pinMode(mode);
    }
}