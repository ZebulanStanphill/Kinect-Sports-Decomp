#include <sstream>
extern "C" void fn_8223DB60(std::stringbuf *self);
// Out-of-line library members the original calls under their fn_ names (used by Matching C units, so
// not renamed): forwarding specialisations, no library body is copied.
template<> __forceinline void std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_Tidy()
{
    fn_8223DB60(this);
}
template std::basic_stringstream<char>::~basic_stringstream();
