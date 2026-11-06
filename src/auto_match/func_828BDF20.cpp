#include <sstream>
extern "C" void fn_8223CD08(std::ios *,std::streambuf *,bool);
template <> __forceinline void std::basic_ios<char>::init(std::streambuf *sb,bool standard) { fn_8223CD08(this,sb,standard); }
extern "C" std::string fn_822403C8(std::stringbuf *);
extern "C" void fn_8265CA20(void *);
template <> __forceinline void std::allocator<char>::deallocate(char *p,unsigned int) { fn_8265CA20(p); }
extern "C" void fn_8223B728(std::ostream *,const std::string *);
struct Source_828BDF20 { virtual void f00();virtual void f04();virtual void f08();virtual void f0c();virtual void f10();virtual void f14();virtual void f18();virtual void f1c();virtual void f20();virtual void f24();virtual void f28();virtual void f2c();virtual void f30();virtual void f34();virtual void f38();virtual void f3c();virtual void f40();virtual void f44();virtual void f48();virtual void f4c();virtual void f50();virtual void f54();virtual void f58();virtual void f5c();virtual std::string f60(unsigned); };
extern "C" std::string fn_828BDF20(Source_828BDF20 *src,unsigned arg) {
 std::ostringstream stream;
 fn_8223B728(&stream,&src->f60(arg));
 return fn_822403C8(stream.rdbuf());
}
