#include <sstream>
extern "C" void fn_8223CD08(std::ios *self, std::streambuf *sb, bool isstd);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::init(std::basic_streambuf<char, std::char_traits<char> > *sb, bool isstd)
{
    fn_8223CD08(this, sb, isstd);
}
extern "C" std::ostream &fn_82240158(std::ostream &os, const char *s);
extern "C" std::string fn_822403C8(std::stringbuf *sb);

extern "C" std::ostream &fn_82237920(std::ostream &os, unsigned __int64 v);
extern "C" std::ostream &fn_8223FBB0(std::ostream &os, unsigned int v);
extern "C" std::ostream &fn_82520AC8(std::ostream &os, unsigned int v);
extern "C" std::ostream &fn_8223B728(std::ostream &os, const void *v);
extern "C" const char *lbl_8315A0BC[];
extern "C" void *fn_828B94E0(void *,void *,int);
extern "C" void fn_82230180(void *);
extern "C" std::ostream &fn_828A8E18(std::ostream &,unsigned char);
struct Msg_828D2C08 {char pad[0x80]; unsigned kind; char address[0x24]; unsigned sid,uid; unsigned char joined; char p[3]; unsigned players; char name[1];};
extern "C" std::string fn_828D2C08(Msg_828D2C08 *m) {
std::ostringstream os;
const char *kind=lbl_8315A0BC[m->kind];
fn_82240158(fn_82240158(os,"SyncMachinesMsg_c - msg type {"),kind);
switch(m->kind) {
case 0: {
char temp[28];
unsigned players=m->players; unsigned char joined=m->joined; unsigned uid=m->uid; unsigned sid=m->sid;
void *p=fn_828B94E0(temp,m->address,0);
fn_82520AC8(fn_82240158(fn_828A8E18(fn_82240158(fn_8223FBB0(fn_82240158(fn_8223FBB0(fn_82240158(fn_8223B728(fn_82240158(os,"}, address {"),p),"}, SID {"),sid),"}, UID {"),uid),"}, joined ok {"),joined),"}, num players {"),players);
fn_82230180(temp); break;
}
case 1: case 3: {unsigned uid=m->uid; fn_8223FBB0(fn_82240158(os,"}, UID {"),uid); break;}
}
fn_82240158(fn_8223B728(fn_82240158(os,"}, name {"),m->name),"}");
return fn_822403C8(os.rdbuf());
}
