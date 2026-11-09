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
extern "C" std::ostream &fn_82520AC8(std::ostream &os, unsigned v);
extern "C" std::ostream &fn_82237920(std::ostream &os, unsigned __int64 v);
struct Msg_828DD528 { char pad[0x80]; unsigned __int64 checkValue; unsigned searcherId; unsigned hostId; bool versionMatch; };
extern "C" std::string fn_828DD528(Msg_828DD528 *m)
{
    std::ostringstream os;
    fn_82240158(os, "SysLinkFindMsg_c - ");
    if (m->versionMatch) {
        unsigned host = m->hostId;
        unsigned searcher = m->searcherId;
        unsigned __int64 check = m->checkValue;
        fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_82237920(fn_82240158(os,
            "version match, check value {"), check), "}, searcher's netinst id {"), searcher),
            "}, host's netinst id {"), host), "}");
    } else {
        fn_82240158(os, "version mis-match");
    }
    return fn_822403C8(os.rdbuf());
}
