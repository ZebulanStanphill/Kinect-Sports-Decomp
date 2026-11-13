// Deleting destructor of std::basic_ostringstream<char> as its vtable calls it,
// with the std::basic_ios subobject at 0x50 as this (still under its fn_ name):
// destroys the whole stream and, when bit 0 of flags is set, frees it.
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" void fn_8265CA20(void *ptr); // operator delete

extern "C" OStringStreamObject_8223DCC8 *fn_8223D050(char *ios, unsigned int flags)
{
    OStringStreamObject_8223DCC8 *self = (OStringStreamObject_8223DCC8 *)(ios - 0x50);
    self->~OStringStreamObject_8223DCC8();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
