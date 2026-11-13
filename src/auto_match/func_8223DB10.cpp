// std::basic_streambuf<char>::~basic_streambuf() from Visual C++ 2010's
// <streambuf>: deletes the locale, then destroys the _Mutex member
// (func_82F62528.cpp). The library deletes through its _DELETE_CRT macro; here it
// calls std::locale's deleting destructor by the name C units use, fn_8223DA98
// (that function calls the out-of-line locale::facet::_Decref, fn_8223F5A0, which
// C units also call, so neither has its C++ name yet).
#include <xdebug>

extern "C" void *fn_8223DA98(void *locale, unsigned int flags);

#undef _DELETE_CRT
#define _DELETE_CRT(ptr) \
    if ((ptr) != 0) fn_8223DA98((ptr), 1)
#include <streambuf>

template std::basic_streambuf<char, std::char_traits<char> >::~basic_streambuf();
