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
extern "C" std::ostream &fn_82237920(std::ostream&,unsigned __int64);
struct Msg_828B7788 {char pad[0x38];unsigned __int64 a,b,c;};
extern "C" std::string fn_828B7788(Msg_828B7788 *m){std::ostringstream os;unsigned __int64 c=m->c,b=m->b,a=m->a;
fn_82240158(fn_82237920(fn_82240158(fn_82237920(fn_82240158(fn_82237920(fn_82240158(os,"<table bgcolor='CCCCCC' font='sans-serif' class='textblack' border=1 nowrap=true width = 100%><tr><td>Last Broadcast Time</td><td>"),a),"</td></tr><tr><td>First Broadcast Time</td><td>"),b),"</td></tr><tr><td>Syslink Check Value</td><td>"),c),"</td></tr></table>");return fn_822403C8(os.rdbuf());}