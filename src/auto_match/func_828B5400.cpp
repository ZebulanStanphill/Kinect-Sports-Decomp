#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd) { fn_8223CD08(this, sb, isstd); }
extern "C" std::ostream &fn_82240158(std::ostream &, const char *);
extern "C" std::ostream &fn_8223B728(std::ostream &, const std::string &);
extern "C" std::string fn_822403C8(std::stringbuf *);
extern "C" std::string *fn_828B7940(std::string *, void *, int);
extern "C" void fn_8265CA20(void *);
template<> __forceinline void std::allocator<char>::deallocate(char *p, size_t) { fn_8265CA20(p); }
extern "C" std::string fn_828B5400(char *self, unsigned char color) {
 std::ostringstream os;
 if (color != 0) {
  unsigned raw[7]; std::string *str=fn_828B7940((std::string *)raw,self+0x30,0);
  fn_82240158(fn_8223B728(fn_82240158(os,"<font color=blue>REMOTETALKER</font>{XUID="),*str),"}");
  ((std::string *)raw)->~basic_string();
 } else {
  unsigned raw[7]; std::string *str=fn_828B7940((std::string *)raw,self+0x30,0);
  fn_82240158(fn_8223B728(fn_82240158(os,"REMOTETALKER: {XUID="),*str),"}");
  ((std::string *)raw)->~basic_string();
 }
 return fn_822403C8(os.rdbuf());
}
