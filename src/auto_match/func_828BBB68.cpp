#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
extern "C" std::string fn_822403C8(const std::stringbuf *sb);
// Out-of-line library members the original calls under their fn_ names (used by Matching C units, so
// not renamed): forwarding specialisations, no library body is copied.
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
template<> __forceinline std::string std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str() const
{
    return fn_822403C8(this);
}
extern "C" std::string fn_828BBB68(int *p)
{
    std::ostringstream os;
    os << *p;
    return os.str();
}
