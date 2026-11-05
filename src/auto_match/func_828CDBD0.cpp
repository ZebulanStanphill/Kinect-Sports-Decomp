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
extern "C" std::ostream &fn_82520AC8(std::ostream&,unsigned); extern "C" std::ostream &fn_828A8E18(std::ostream&,bool);
struct Msg_828CDBD0 {char pad[0x84];unsigned a,b;bool c;};
extern "C" std::string fn_828CDBD0(Msg_828CDBD0 *m) {std::ostringstream os;unsigned b=m->b;bool c=m->c;unsigned a=m->a;
fn_82240158(fn_82520AC8(fn_82240158(fn_828A8E18(fn_82240158(fn_82520AC8(fn_82240158(os,"SplitMessage_c - uniqueId {"),a),"}, highest index {"),c),"}, index {"),b),"}");return fn_822403C8(os.rdbuf());}