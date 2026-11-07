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
extern "C" std::ostream &fn_82237920(std::ostream &os, unsigned __int64 v);
extern "C" std::ostream &fn_82520AC8(std::ostream &os, unsigned int v);
extern "C" std::ostream &fn_828BB1F0(std::ostream &os, unsigned char v);
extern "C" std::ostream &fn_8223B728(std::ostream &os, const std::string &s);
struct JoinMsg_828D1E28 {
    char pad0[0x88];
    unsigned int numLocalPlayers;
    unsigned int numTotalPlayers;
    char pad90[8];
    unsigned __int64 joinNumber;
    unsigned int joinerNetInstId;
    unsigned int hostNetInstId;
    std::string name;
    unsigned char constantFlags;
    unsigned char variableFlags;
};
extern "C" std::string fn_828D1E28(JoinMsg_828D1E28 *m)
{
    std::ostringstream os;
    std::ostream &o = fn_828BB1F0(fn_82240158(
        fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(
        fn_82237920(fn_82240158(os, "JoinMsg_c - join number {"), m->joinNumber),
        "}, joiner's net inst id {"), m->joinerNetInstId),
        "}, host's net inst id {"), m->hostNetInstId),
        "}, num local players {"), m->numLocalPlayers),
        "}, num total players {"), m->numTotalPlayers),
        "}, game constant flags {"), m->constantFlags);
    std::ostream &o2 = fn_82240158(fn_828BB1F0(fn_82240158(o,
        "}, game variable flags {"), m->variableFlags),
        "}, name {");
    fn_82240158(fn_8223B728(o2, m->name), "}");
    return fn_822403C8(os.rdbuf());
}
