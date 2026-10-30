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
extern "C" const char *lbl_8315A138[];
struct Msg_828DA148 { char pad[0x80]; int type; };
extern "C" std::string fn_828DA148(Msg_828DA148 *m)
{
    std::ostringstream os;
    const char *name = lbl_8315A138[m->type];
    fn_82240158(fn_82240158(fn_82240158(os, "ConnectionQueryMsg_c - reply {"), name), "}");
    return fn_822403C8(os.rdbuf());
}
