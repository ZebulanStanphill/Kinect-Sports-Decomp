#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
extern "C" std::string fn_822403C8(const std::stringbuf *sb);
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::ostream &fn_8223B728(std::ostream &os, const std::string &s);
extern "C" std::ostream &fn_82237920(std::ostream &os, __int64 v);
extern "C" void fn_828B5580(void *self, void *src);
extern "C" void fn_828B55B0(void *self);
extern "C" void fn_8265CA20(void *p);
struct Tmp_828DD058 { char b[16]; };
extern "C" std::string *fn_828B5A20(std::string *out, Tmp_828DD058 *t, int a, int b);
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
struct Src_828DD058 { char pad[0x60]; char sub[0xc]; int f6c; char pad70[0x10]; char muting; char pad81[7]; __int64 f88; };
extern "C" std::string fn_828DD058(Src_828DD058 *m, int p3)
{
    std::ostringstream os;
    struct { Tmp_828DD058 t; char sraw[28]; } L;
    const char *w;
    if (m->muting != 0) w = "MUTING"; else w = "UNMUTING";
    int v = m->f6c;
    fn_828B5580(&L.t, m->sub);
    __int64 q = m->f88;
    fn_82240158(fn_82240158(fn_82240158(fn_82237920(fn_82240158(fn_8223B728(fn_82240158(os, "Sending to "), *fn_828B5A20((std::string *)L.sraw, &L.t, p3, v)), " that "), q), " is "), w), " them");
    ((std::string *)L.sraw)->~basic_string();
    fn_828B55B0(&L.t);
    return os.str();
}
