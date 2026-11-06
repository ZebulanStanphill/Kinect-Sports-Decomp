#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::string fn_822403C8(std::stringbuf *sb);
extern "C" const char *fn_828A0948(int);
extern "C" std::ostream &fn_82237920(std::ostream &os, unsigned __int64 v);
extern "C" std::ostream &fn_8223FBB0(std::ostream &os, unsigned int v);
extern "C" std::ostream &fn_82520AC8(std::ostream &os, unsigned int v);
extern "C" std::ostream &fn_8223B728(std::ostream &os, const void *v);
struct Msg_828DC498 {
    char pad[0x80];
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int e;
    int kind;
    unsigned __int64 num;
    char pad2[4];
    char name[1];
};
extern "C" std::string fn_828DC498(Msg_828DC498 *m)
{
    std::ostringstream os;
    unsigned __int64 n = m->num;
    const char *k = fn_828A0948(m->kind);
    fn_82237920(fn_82240158(fn_82240158(fn_82240158(os, "JoinReplyMsg_c - response {"), k), "}, join number {"), n);
    if (m->kind == 0) {
        unsigned int e = m->e;
        unsigned int d = m->d;
        unsigned int c = m->c;
        unsigned int b = m->b;
        unsigned int a = m->a;
        fn_8223FBB0(fn_82240158(fn_8223FBB0(fn_82240158(fn_82520AC8(fn_82240158(fn_8223FBB0(fn_82240158(fn_8223FBB0(fn_82240158(os, "}, owner SID {"), a), "}, owner UID {"), b), "}, owner NumPlayers {"), c), "}, added SID {"), d), "}, added UID {"), e);
    }
    fn_82240158(fn_8223B728(fn_82240158(os, "}, name {"), m->name), "}");
    return fn_822403C8(os.rdbuf());
}
