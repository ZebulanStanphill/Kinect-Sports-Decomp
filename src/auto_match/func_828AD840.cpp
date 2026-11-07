#include <sstream>
extern "C" void fn_8223CD08(std::ios *, std::streambuf *, bool);
extern "C" std::string fn_822403C8(const std::stringbuf *);
extern "C" std::ostream &fn_82240158(std::ostream &,const char *);
extern "C" std::ostream &fn_8223B728(std::ostream &,const std::string &);
extern "C" std::ostream &fn_8223FBB0(std::ostream &,int);
extern "C" std::ostream &fn_82237A48(std::ostream &,double);
extern "C" std::ostream &fn_82237920(std::ostream &,unsigned __int64);
extern "C" std::ostream &fn_828A8E18(std::ostream &,bool);
extern "C" void fn_82517B60(std::ostream &,char);
extern "C" void fn_8223FDB8(std::ostream &);
extern "C" const char *lbl_83159E6C[];
extern "C" const char *lbl_83159BCC[];
extern "C" int fn_828ACBD0(int);
struct Debug_828AD840 { char pad[0x40]; bool flag; };
extern "C" Debug_828AD840 *fn_8288A398();
extern "C" char lbl_82024A3C[];
extern "C" bool fn_828A0B28(int);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd) { fn_8223CD08(this,sb,isstd); }
template<> __forceinline std::string std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str() const { return fn_822403C8(this); }
static __forceinline void line_828AD840(std::ostream &o) { fn_82517B60(o,10); fn_8223FDB8(o); }
extern "C" std::string fn_828AD840(int self,const std::string &name) {
 std::ostringstream os;

 line_828AD840(fn_82240158(fn_8223B728(fn_82240158(os,"NetworkState ("),name),"):"));
 {const char *v=lbl_83159E6C[*(int *)(self+0xa0)];line_828AD840(fn_82240158(fn_82240158(os,"\tGame type is set to ModeType: "),v));}
 {const char *v=lbl_83159BCC[fn_828ACBD0(self)];int c=fn_828ACBD0(self);line_828AD840(fn_82240158(fn_82240158(fn_82240158(fn_8223FBB0(fn_82240158(os,"\tConnection state set to "),c)," '"),v),"'"));}
 {double v=*(float *)(self+0x30);line_828AD840(fn_82237A48(fn_82240158(os,"\tTime created = "),v));}
 {Debug_828AD840 *d=fn_8288A398();line_828AD840(fn_82240158(fn_828A8E18(fn_82240158(os,"\tIn debug mode = '"),d->flag),"'"));}
 {int v=*(int *)(self+0x224);line_828AD840(fn_8223FBB0(fn_82240158(os,"\tNum generic machines = "),v));}
 line_828AD840(fn_82240158(os,"\tTODO - more info about generic machines???"));
 {unsigned __int64 v=*(unsigned __int64 *)(self+0x198);line_828AD840(fn_82237920(fn_82240158(os,"\tCheck value = "),v));}
 {int v=*(int *)(self+8);line_828AD840(fn_8223FBB0(fn_82240158(os,"\tBroad cast net id = "),v));}
 {int v=*(int *)(self+0x1a4);line_828AD840(fn_8223FBB0(fn_82240158(os,"\tNum Recently received syslink searches = "),v));}
 {const char *v=*(unsigned int *)(self+0x8c)==0?lbl_82024A3C:"something";line_828AD840(fn_82240158(fn_82240158(fn_82240158(os,"\tXOMatch = '"),v),"'"));}
 {bool v=fn_828A0B28(self);line_828AD840(fn_82240158(fn_828A8E18(fn_82240158(os,"\tTitle address exists = '"),v),"'"));}
 return os.str();
}
