// Deleting destructor of std::basic_istringstream<char> as its vtable calls it,
// with the std::basic_ios subobject at 0x58 as this (still under its fn_ name):
// destroys the whole stream and, when bit 0 of flags is set, frees it.
#include <sstream>

extern "C" void fn_8265CA20(void *ptr); // operator delete

// A complete stream object: destroying a member destroys its virtual base too
// (the compiler calls the stream's vbase destructor), which a destructor call
// through a pointer does not express.
struct Complete_82828C58 {
    std::istringstream stream;
};

extern "C" Complete_82828C58 *fn_82828C58(char *ios, unsigned int flags)
{
    Complete_82828C58 *self = (Complete_82828C58 *)(ios - 0x58);
    self->~Complete_82828C58();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
