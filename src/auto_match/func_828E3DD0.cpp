#include <sstream>
extern "C" void fn_8223CD08(std::ios *,std::streambuf *,bool);
template<> __forceinline void std::basic_ios<char,std::char_traits<char> >::init(std::basic_streambuf<char,std::char_traits<char> > *sb,bool isstd){fn_8223CD08(this,sb,isstd);}
extern "C" {std::ostream &fn_82240158(std::ostream &,const char *);std::string fn_822403C8(std::stringbuf *);std::ostream &fn_8223B728(std::ostream &,const void *);std::ostream &fn_82520AC8(std::ostream &,unsigned);extern char lbl_82027240[],lbl_821C24F0[];}
typedef char *(*Get_828E3DD0)(int *);
extern "C" std::string fn_828E3DD0(int *p){char *node=(*(Get_828E3DD0 *)(*p+0x1c))(p);std::ostringstream os;
fn_82240158(os,"FunctionScopeItem_c: ");
if(*(unsigned *)(node+0x20))fn_82240158(fn_8223B728(fn_82240158(os,"\""),node+0x10),"\" ");
unsigned n=*(unsigned *)(node+0x30);fn_82240158(fn_82520AC8(fn_82240158(os,lbl_82027240),n),lbl_821C24F0);
return fn_822403C8(os.rdbuf());}
