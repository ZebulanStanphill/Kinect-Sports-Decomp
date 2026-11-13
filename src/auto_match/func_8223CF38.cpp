#include <sstream>

// std::stringbuf(openmode) from the real VC10 <sstream>; its base constructor stays out of line
// (fn_8223CD80, renamed to basic_streambuf<char>'s constructor by this unit's rename map).
template std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(std::ios_base::openmode);
