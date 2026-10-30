#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
extern "C" std::string fn_822403C8(const std::stringbuf *sb);
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::ostream &fn_8223FBB0(std::ostream &os, unsigned char v);
// Out-of-line library members the original calls under their fn_ names (used by Matching C units, so
// not renamed): forwarding specialisations, no library body is copied.
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
template<> __forceinline std::string std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str() const
{
    return fn_822403C8(this);
}
struct Src_828A9138 { char pad[8]; unsigned char v; };
extern "C" std::string fn_828A9138(void *, void *, Src_828A9138 *p)
{
    std::ostringstream os;
    unsigned char v = p->v;
    fn_82240158(fn_8223FBB0(fn_82240158(os, "NetDefU8_c - {"), v), "}");
    return os.str();
}
