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
extern "C" {
void fn_82404590(); void fn_82404638(); char lbl_821B2CEC[],lbl_821B7C64[];
unsigned char fn_8288B760(void *); unsigned int lbl_83265A28;
void fn_828AAF70(void *,bool);
}
extern "C" void fn_82403D18(Owner *self) {
 Function one,two;
 unsigned char *state=self->state;
 fn_822B1A68(*(void **)(state+0x7c), self->Get()+0xf0);
 {Member m; m.fn=fn_82404590; m.adjust=0;
 Bound<32> bound; bound.member=m; bound.ctx=self; 
 Impl<32> *p=std::_Allocate(1,(Impl<32> *)0);
 p->vt=lbl_821B2CEC; p->f=*(const Bytes<32> *)&bound;
 one.impl=(Callable *)p;
 
 fn_82329730(self->Events()+0x30,&one); fn_82359C18(&one); }
 {Member m; m.fn=fn_82404638; m.adjust=0;
 Bound<24> bound; bound.member=m; bound.ctx=self; 
 Impl<24> *p=std::_Allocate(1,(Impl<24> *)0);
 p->vt=lbl_821B7C64; p->f=*(const Bytes<24> *)&bound;
 two.impl=(Callable *)p;
 
 move((Function *)(self->Events()+0xf8),two); fn_82359C18(&two); }
 if (fn_8288B760(self)) {
  unsigned int r=lbl_83265A28*0x19660dU+0x3c6ef35fU; lbl_83265A28=r;
  bool a=(unsigned int)((int)r>0)!=0; fn_828AAF70(self->Get()+0x2e0,a);
  r=lbl_83265A28*0x19660dU+0x3c6ef35fU; lbl_83265A28=r;
  bool b=(unsigned int)((int)r>0)!=0; fn_828AAF70(self->Get()+0x334,b);
 }
}
