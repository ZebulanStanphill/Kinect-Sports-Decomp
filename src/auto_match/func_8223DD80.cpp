// std::num_put<char, std::ostreambuf_iterator<char> >::do_put(..., long double) from Visual
// C++ 2010's <xlocnum>. _Ffmt and _Fput stay calls to the original's out-of-line copies.
#include <ostream>

typedef std::ostreambuf_iterator<char> Iter;
typedef std::num_put<char, Iter> NumPut;

template <> char *NumPut::_Ffmt(char *fmt, char spec, std::ios_base::fmtflags flags) const;
template <>
Iter NumPut::_Fput(Iter dest, std::ios_base &iosbase, char fill, const char *buf, size_t beforepoint,
                   size_t afterpoint, size_t trailing, size_t count) const;

template Iter NumPut::do_put(Iter, std::ios_base &, char, long double) const;
