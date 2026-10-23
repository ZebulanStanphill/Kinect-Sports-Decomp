#include "stdext/xmemory.h"
union Member { struct { void (*fn)(); int adjust; }; unsigned __int64 bits; };
struct Callable { virtual Callable *Copy(void *)=0; virtual void pad1()=0; virtual void pad2()=0; virtual void Delete(bool)=0; };
struct Function { union {unsigned __int64 align[2]; unsigned char storage[16];}; Callable *impl; };
template<int N> struct Bytes { unsigned char data[N]; };
template<int N> struct Impl { void *vt; int pad; Bytes<N> f; };
template<int N> struct Bound { Member member; void *ctx; unsigned char pad[N-12]; };
extern "C" { void fn_82359C18(Function *); void fn_822B1A68(void *,void *); void fn_82329730(void *,Function *); }
class Owner {
public:
 virtual void pad0(); virtual void pad1(); virtual unsigned char *Get();
 virtual void pad3();
 virtual void pad4();
 virtual void pad5();
 virtual void pad6();
 virtual void pad7();
 virtual void pad8();
 virtual void pad9();
 virtual void pad10();
 virtual void pad11();
 virtual void pad12();
 virtual void pad13();
 virtual void pad14();
 virtual void pad15();
 virtual void pad16();
 virtual void pad17();
 virtual void pad18();
 virtual unsigned char *Events();
 virtual void pad20();
 virtual void pad21();
 virtual void pad22();
 virtual void pad23();
 virtual void pad24();
 virtual void pad25();
 virtual void pad26();
 virtual unsigned char Enabled();
 unsigned char padding[0x7c];
public: unsigned char *state; int gap; unsigned char *callbacks;
};
static void assign(Function *to,Function &from) {
 if (to!=&from) {
  if (to->impl) { to->impl->Delete(to->impl!=(Callable *)to); to->impl=0; }
  to->impl=from.impl->Copy(from.impl==(Callable *)&from ? to : 0);
 }
}
static void move(Function *to,Function &from) {
 if (to!=&from) {
  fn_82359C18(to);
  if (!from.impl) to->impl=0;
  else if (from.impl==(Callable *)&from) to->impl=from.impl->Copy(to);
  else { to->impl=from.impl; from.impl=0; }
 }
}
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
 float f[4]; unsigned int u[4];
} Vec;
extern "C" {
void fn_82594968(void *); unsigned char fn_8288B760(void *);
void fn_82CED628(void *,const char *); void fn_825AC298(); char lbl_821C819C[];
void fn_82F565A0(void *,Function *); void fn_8289C940(void *,void *);
void fn_825ADB28(void *,const Vec *); void fn_822CB0A0(void *,const Vec *);
void fn_828AB870(void *,unsigned int); void fn_828AAF70(void *,bool);
}
extern "C" Vec __VMXGetReg(int n);
extern "C" void fn_825AAAA0(Owner *self) {
 fn_82594968(self);
 unsigned char *state=self->state;
 bool enabled=!fn_8288B760(self) && self->Enabled();
 unsigned char *q=state+0x4f0;
 unsigned char *obj=*(unsigned char **)(state+0x4e0);
 *q=enabled;
 if (!enabled) {
  if (obj) { *(int *)(obj+0x104)=0; *(int *)(obj+0x120)=0; fn_82CED628(obj+0x14,"Actuator (disabled)"); }
  *(Vec *)(q+0x50) = __VMXGetReg(77);
 }
 Function temp;
 Impl<56> *p;
 {
 Member m; m.fn=fn_825AC298; m.adjust=0;
 Bound<56> bound; bound.member=m; bound.ctx=self;
 p=std::_Allocate(1,(Impl<56> *)0);
 p->vt=lbl_821C819C; p->f=*(const Bytes<56> *)&bound;
 }
 temp.impl=(Callable *)p;
 { unsigned char buffer[20]; fn_82F565A0(buffer,&temp); fn_8289C940(self->Get()+0x1ec,buffer); }
 if (fn_8288B760(self)) {
  typedef unsigned char *(*GetFn)(Owner *);
  GetFn pf=(GetFn)(*(void ***)self)[2];
  Vec a=*(Vec *)(state+0x50), b=*(Vec *)(state+0xc0);
  fn_825ADB28(pf(self)+0x248,&a); fn_822CB0A0(self->Get()+0x29c,&b);
  unsigned int v=*(unsigned int *)(state+0xb20); fn_828AB870(self->Get()+0x144,v);
  int flag=*(void **)(state+0xb1c)==0 && *(void **)(state+0xb20)!=0;
  fn_828AAF70(self->Get()+0x198,flag==1);
 }
 fn_82359C18(&temp);
}
