#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
extern "C" std::string fn_822403C8(const std::stringbuf *sb);
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::ostream &fn_82520AC8(std::ostream &os, unsigned v);
extern "C" std::ostream &fn_8223B728(std::ostream &os, unsigned v);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
template<> __forceinline std::string std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str() const
{
    return fn_822403C8(this);
}
struct H_82892758 { int a; int b; };
struct P4_82892758 { char pad[8]; int h; };
struct P5_82892758 { int x; };
extern "C" {
void fn_828B5580(H_82892758 *, void *);
unsigned fn_828B55F8(H_82892758 *);
unsigned fn_828B5600(H_82892758 *);
unsigned fn_828B55F0(H_82892758 *);
void fn_828B55B0(H_82892758 *);
unsigned fn_828A12E8(P5_82892758 *);
unsigned *fn_8288CD40(void *, unsigned, unsigned *);
}
struct Guard_82892758 {
    H_82892758 h;
    Guard_82892758(void *p) { fn_828B5580(&h, p); }
    ~Guard_82892758() { fn_828B55B0(&h); }
};
extern "C" std::string fn_82892758(void *, void *, P4_82892758 *p4, P5_82892758 *p5)
{
    Guard_82892758 g((char *)p4 + 8);
    std::ostringstream os;
    unsigned key = fn_828B55F8(&g.h);
    unsigned tmp;
    unsigned base = fn_828A12E8(p5) + 0x94;
    unsigned idx = *fn_8288CD40(&tmp, base, &key) + 0x10;
    unsigned a = fn_828B5600(&g.h);
    unsigned b = fn_828B55F8(&g.h);
    unsigned c = fn_828B55F0(&g.h);
    fn_82240158(fn_82520AC8(fn_82240158(fn_8223B728(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(os, "NetObj - creator {"), c), "}, type {"), b), "}, "), idx), "}, id {"), a), "}");
    return os.str();
}
