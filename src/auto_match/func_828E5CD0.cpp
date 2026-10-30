#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
// Out-of-line library members the original calls under their fn_ names (used by Matching C units, so
// not renamed): forwarding specialisations, no library body is copied.
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::string fn_822403C8(std::stringbuf *sb);
extern "C" void fn_828E5960(std::ostream &os, int v);
struct Obj_828E5CD0 { char pad[0x80]; int f80; };
extern "C" std::string fn_828E5CD0(Obj_828E5CD0 *p)
{
    std::ostringstream os;
    std::ostream &o = fn_82240158(os, "Function::DefaultMessage_c - ");
    fn_828E5960(o, p->f80);
    return fn_822403C8(os.rdbuf());
}
