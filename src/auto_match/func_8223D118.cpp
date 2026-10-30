#include <sstream>
extern "C" void fn_8223DB60(std::stringbuf *self);
extern "C" void fn_8265CA20(void *p);
// Out-of-line library members the original calls under their fn_ names (used by Matching C units, so
// not renamed): forwarding specialisations, no library body is copied.
template<> __forceinline void std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_Tidy()
{
    fn_8223DB60(this);
}
extern "C" std::stringbuf *fn_8223D118(std::stringbuf *self, unsigned int flags)
{
    self->std::stringbuf::~stringbuf();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
