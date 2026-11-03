#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::ostream &fn_8223FBB0(std::ostream &os, unsigned int v);
extern "C" std::string fn_822403C8(std::stringbuf *sb);
extern "C" const char *lbl_83159FE0[];
struct Msg_828C8748 { char pad[0x80]; unsigned int a; int type; unsigned int b; };
extern "C" std::string fn_828C8748(Msg_828C8748 *m)
{
    std::ostringstream os;
    unsigned int b = m->b;
    unsigned int a = m->a;
    const char *name = lbl_83159FE0[m->type];
    fn_82240158(fn_8223FBB0(fn_82240158(fn_8223FBB0(fn_82240158(fn_82240158(fn_82240158(os, "LeaveGameMsg_c - type {"), name), "}, leave context {"), a), "} about UID {"), b), "}");
    return fn_822403C8(os.rdbuf());
}
