#include "game/SwappedBlock_82A86CB0.h"
extern template struct SwappedBlock_82A86CB0<0x2c>;
extern "C" void fn_82A8C620(void *,int,int,const char *);
extern "C" void fn_82A8C770(void *,const char *,void *,int);
struct Reader_82A8C8F0 {virtual void f0();virtual unsigned char f4();virtual void f8();virtual void fc();virtual unsigned char f10(void *,int,void *);};
extern "C" int fn_82A8C8F0(char **owner,Reader_82A8C8F0 *r,const char *data) {
 struct Pair_82A8C8F0 {float v;}; struct {Pair_82A8C8F0 lo,hi;char spare[4];Pair_82A8C8F0 a,b;} loc;
 unsigned char buf[0x29]; SwappedBlock_82A86CB0<0x2c> block;
 char *p; loc.lo.v=0.00001f;loc.hi=loc.lo;loc.a.v=loc.lo.v;loc.b.v=loc.hi.v;
 p=*owner?*owner:loc.spare;
 if(r->f4() && r->f10(buf,0x29,&loc)) {
 block.Set(buf,0x29);
 fn_82A8C620(&block,0,0x20,data);
 data+=8;p+=4;fn_82A8C770(p,data,&block,0x20);
 fn_82A8C770(p+4,data+0x34,&block,0xb2);
 return 1;} return 0;
}
