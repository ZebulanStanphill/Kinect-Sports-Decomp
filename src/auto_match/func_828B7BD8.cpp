#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
extern "C" std::string fn_822403C8(const std::stringbuf *sb);
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::ostream &fn_8223B728(std::ostream &os, const std::string &s);
extern "C" std::ostream &fn_82520AC8(std::ostream &os, unsigned int v);
extern "C" void fn_8265CA20(void *p);
extern "C" std::string *fn_828B7940(std::string *out, void *id, int flags);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
template<> __forceinline std::string std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str() const
{
    return fn_822403C8(this);
}
template<> void std::allocator<char>::deallocate(pointer p, size_type)
{
    fn_8265CA20(p);
}
struct Session_828B7BD8 {
    char pad0[0x38]; char sessionId[8];
    unsigned int userIndex; unsigned int procedureIndex; unsigned int numPeople;
    char pad4c[4]; void *search;
};
extern "C" std::string fn_828B7BD8(Session_828B7BD8 *s)
{
    std::ostringstream os;
    struct { char sraw[28]; } L;
    const char *search;
    if (s->search != 0) search = "(exists)"; else search = "(null)";
    unsigned int numPeople = s->numPeople;
    unsigned int procedureIndex = s->procedureIndex;
    unsigned int userIndex = s->userIndex;
    fn_82240158(fn_82240158(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_8223B728(fn_82240158(os,
        "<table bgcolor='CCCCCC' font='sans-serif' class='textblack' border=1 nowrap=true width = 100%><tr><td>SessionId</td><td>"),
        *fn_828B7940((std::string *)L.sraw, s->sessionId, 0)),
        "</td></tr><tr><td>User Index</td><td>"), userIndex),
        "</td></tr><tr><td>Procedure Index</td><td>"), procedureIndex),
        "</td></tr><tr><td>Num People In Party</td><td>"), numPeople),
        "</td></tr><tr><td>XOSearch</td><td>"), search),
        "</td></tr></table>");
    ((std::string *)L.sraw)->~basic_string();
    return os.str();
}
