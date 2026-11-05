#include <istream>
extern "C" void fn_8265CA20(void *p);
extern "C" void *fn_8251B9C0(void *p, unsigned int flags)
{
    char *self = (char *)p - 0x18;
    ((std::iostream *)self)->std::iostream::~basic_iostream();
    ((std::ios_base *)(self + 0x18))->std::ios_base::~ios_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
