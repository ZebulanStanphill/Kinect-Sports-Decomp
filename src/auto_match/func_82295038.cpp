// std::wostringstream scalar deleting destructor, entered through its ios_base virtual base (this = &ios_base, complete object at -0x50)
#include <sstream>

extern "C" void fn_8265CA20(void *p);

extern "C" std::wostringstream *fn_82295038(std::ios_base *base, unsigned int flags)
{
    std::wostringstream *self = (std::wostringstream *)((char *)base - 0x50);
    self->std::wostringstream::~basic_ostringstream();
    ((std::ios_base *)((char *)self + 0x50))->std::ios_base::~ios_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
