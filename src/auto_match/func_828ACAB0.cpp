#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd) { fn_8223CD08(this, sb, isstd); }
extern "C" std::ostream &fn_82240158(std::ostream&, const char*);
extern "C" std::ostream &fn_82520AC8(std::ostream&, unsigned);
extern "C" std::string fn_822403C8(std::stringbuf*);
struct Msg_828ACAB0 { int pad; bool valid; unsigned a,b,c,d; };
extern "C" std::string fn_828ACAB0(Msg_828ACAB0 *m) {
 std::ostringstream os;
 if (!m->valid) { fn_82240158(os,"[PS: invalid]"); }
 else {
  unsigned d=m->d, b=m->b, c=m->c, a=m->a;
  fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(fn_82520AC8(fn_82240158(os,"[PS: valid, Pub: "),a),"/"),c),", Priv: "),b),"/"),d),"]");
 }
 return fn_822403C8(os.rdbuf());
}
