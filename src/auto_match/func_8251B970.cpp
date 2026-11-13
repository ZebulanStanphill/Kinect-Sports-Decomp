// std::stringstream scalar deleting destructor, entered through its ios_base virtual base (this = &ios_base, complete object at -0x60)
#include <sstream>

extern "C" void fn_8265CA20(void *p);

extern "C" std::stringstream *fn_8251B970(std::ios_base *base, unsigned int flags)
{
    std::stringstream *self = (std::stringstream *)((char *)base - 0x60);
    self->std::stringstream::~basic_stringstream();
    ((std::ios_base *)((char *)self + 0x60))->std::ios_base::~ios_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
