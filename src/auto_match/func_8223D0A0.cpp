#include <ostream>
extern "C" void fn_8265CA20(void *p);
extern "C" std::ostream *fn_8223D0A0(void *p, unsigned int flags)
{
    std::ostream *self = (std::ostream *)((char *)p - 8);
    self->std::ostream::~basic_ostream();
    ((std::ios_base *)((char *)self + 8))->std::ios_base::~ios_base();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
