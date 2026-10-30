#include <istream>
extern "C" void fn_8265CA20(void *p);
extern "C" std::istream *fn_822EF818(void *p, unsigned int flags)
{
    std::istream *self = (std::istream *)((char *)p - 16);
    self->std::istream::~basic_istream();
    ((std::ios_base *)((char *)self + 16))->std::ios_base::~ios_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
