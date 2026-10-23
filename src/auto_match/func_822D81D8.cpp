#include "stdext/xmemory.h"
struct Impl;
struct Function { char data[16]; Impl *impl; char pad[4]; };
struct PM { void (*fn)();int off; };
struct Binder { PM method; void *obj; char pad[12]; };
struct Box { void *vt; int pad; Binder f; };
extern "C" { void fn_822C70F0(void*,void*,void*);void fn_8223B688(void*,void*); void fn_82365BD8(void*,void*);
void fn_822D8848(); void fn_822D8858();void *memcpy(void*,const void*,unsigned);
void fn_82511668(void*,Function*);void fn_822315A0(void*);
char *fn_82560010(void*,const char*);unsigned short *fn_8251F720(void*,int);void fn_8251FA58(void*);
extern char lbl_821ADA68[],lbl_821ADA7C[],lbl_821C2424[];extern float lbl_82192730[]; }
#define AT(T,p,o) (*(T*)((char*)(p)+(o)))
struct Fn2{char d[16];void *impl;int pad;};
struct Cb{void *vt;int pad;Fn2 f;};
extern "C" void *fn_822D81D8(char *self,void *p2,void *p3,void *p4,int p5,void *p6,int p7,void *p8,int p9,int p10,int p11) {
 fn_822C70F0(self,p2,p3);
 AT(int,self,0x58)=p5;AT(void*,self,0x54)=p4;
 char *str=self+0x5c;AT(void*,self,0)=lbl_821ADA68;fn_8223B688(str,p6);
 AT(int,self,0x78)=p7;AT(int,self,0x7c)=p10;fn_82365BD8(self+0x88,p8);
 {Cb *cb=(Cb*)(self+0x90);cb->vt=lbl_821C2424;Fn2 *fp=&cb->f;fp->impl=0;}
 {Cb *cb=(Cb*)(self+0xb0);cb->vt=lbl_821C2424;Fn2 *fp=&cb->f;fp->impl=0;}
 AT(int,self,0xd0)=p9;AT(int,self,0xe0)=p11;
 {
  Box *p;
  {PM pm={fn_822D8848,0}; Binder b;
  b.method=pm;b.obj=self;
  p=std::_Allocate(1,(Box*)0);p->vt=lbl_821ADA7C;p->f=b;}
  {Function f;f.impl=(Impl*)p;
  fn_82511668(self+0x90,&f);}
 }
 {
  Box *p;
  {PM pm={fn_822D8858,0}; Binder b;
  b.method=pm;b.obj=self;
  p=std::_Allocate(1,(Box*)0);p->vt=lbl_821ADA7C;p->f=b;}
  {Function f;f.impl=(Impl*)p;
  fn_82511668(self+0xb0,&f);}
 }
 if(AT(int,self,0xd0)) {
  void *manager=AT(void*,AT(void*,self,0x54),0x118);
  const char *name=AT(unsigned,str,0x14)>=16?AT(char*,str,0):str;
   unsigned short *base=fn_8251F720(fn_82560010(AT(void*,manager,0x24),name)+0x44,0),*p=base;
  unsigned short tag=p[6];
  while(tag) {if(tag==0x27)goto found; p=(unsigned short*)(*p+(char*)p);tag=p[6];}
  p=0;
  found:
  AT(float,self,0xd4)=AT(float,p,4);fn_8251FA58(base);
 } else AT(float,self,0xd4)=lbl_82192730[1];
 if(AT(void*,p8,4))fn_822315A0(AT(void*,p8,4));
 return self;
}
