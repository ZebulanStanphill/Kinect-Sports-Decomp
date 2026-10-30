#include <streambuf>
extern "C" void fn_8265CA20(void *p);
extern template std::basic_streambuf<char, std::char_traits<char> >::~basic_streambuf();
extern "C" std::streambuf *fn_8223D8E0(std::streambuf *self, unsigned int flags)
{
    self->std::streambuf::~streambuf();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
