#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::ostream &fn_8223FBB0(std::ostream &os, unsigned int v);
extern "C" std::string fn_822403C8(std::stringbuf *sb);
struct Msg_828D8E20 { char pad[0x84]; unsigned int uid; };
extern "C" std::string fn_828D8E20(Msg_828D8E20 *m)
{
    std::ostringstream os;
    fn_82240158(fn_8223FBB0(fn_82240158(os, "ConnectionErrorMsg_c - lost connection, UID { "), m->uid), "}");
    return fn_822403C8(os.rdbuf());
}
