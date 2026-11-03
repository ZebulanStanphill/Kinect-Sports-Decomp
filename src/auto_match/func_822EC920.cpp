#include <istream>
extern "C" void fn_8223CD08(void *ios);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *_Strbuf, bool _Isstd)
{
    fn_8223CD08(this);
}
template std::basic_istream<char, std::char_traits<char> >::basic_istream(std::basic_streambuf<char, std::char_traits<char> > *, bool);
