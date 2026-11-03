#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
extern "C" std::string fn_822403C8(const std::stringbuf *sb);
extern "C" std::ostream &fn_82520AC8(std::ostream *self, unsigned int v);
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
template<> __forceinline std::string std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str() const
{
    return fn_822403C8(this);
}
struct Talker_828B51F8 { char pad[0x40]; unsigned int userIndex; };
extern "C" std::string fn_828B51F8(Talker_828B51F8 *p, unsigned char colored)
{
    std::ostringstream os;
    unsigned int v = p->userIndex;
    if (colored) fn_82240158(fn_82520AC8(&fn_82240158(os, "<font color=blue>LOCALTALKER</font>{UserIndex="), v), "}");
    else fn_82240158(fn_82520AC8(&fn_82240158(os, "LOCALTALKER: {UserIndex="), v), "}");
    return os.str();
}
