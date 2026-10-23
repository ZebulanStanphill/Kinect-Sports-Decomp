#include "stdext/xmemory.h"
union Member { struct { void (*fn)(); int adjust; }; unsigned __int64 bits; };
struct Callable { virtual Callable *Copy(void *)=0; virtual void pad1()=0; virtual void pad2()=0; virtual void Delete(bool)=0; };
extern "C" void fn_82359C18(struct Function *);
struct Function { union {unsigned __int64 align[2]; unsigned char storage[16];}; Callable *impl; int pad[3]; Function(Callable *p) : impl(p) {} ~Function() { fn_82359C18(this); } };
template<int N> struct Bytes { int data[N/4]; };
template<int N> struct Impl { void *vt; int pad; Bytes<N> f; };
template<int N> struct Bound { Member member; void *ctx; unsigned char pad[N-12]; };
extern "C" { void fn_822B1A68(void *,void *); void fn_82329730(void *,const Function &); }
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
struct PFunction { union {unsigned __int64 align[2]; unsigned char storage[16];}; Callable *impl; int pad[3]; };
static __forceinline void assign(PFunction *to,PFunction &from) {
 Callable *fi=from.impl;
 if (to!=&from) {
  if (to->impl) { to->impl->Delete(to->impl!=(Callable *)to); to->impl=0; }
  if (fi==(Callable *)&from) to->impl=fi->Copy(to); else to->impl=fi->Copy(0);
 }
}
static __forceinline void move(Function *to,Function &from) {
 if (to!=&from) {
  fn_82359C18(to);
  if (!from.impl) to->impl=0;
  else if (from.impl==(Callable *)&from) to->impl=from.impl->Copy(to);
  else { to->impl=from.impl; from.impl=0; }
 }
}
extern "C" {
void fn_82382CB0(); char lbl_821B3AF4[];
void fn_82382E28(); char lbl_821B3B0C[];
void fn_82382FA0(); char lbl_821B3B24[];
void fn_82377FC8(); char lbl_821B3B3C[];
void fn_823774B8(); char lbl_821B3B54[];
void fn_82377788(); char lbl_821B3B6C[];
void fn_82377B20(); char lbl_821B3B84[];
void fn_82377D58(); char lbl_821B3B9C[];

void fn_82383300(void *,const Function &); unsigned char *fn_8238E960(void *,void *); void fn_82383298(void *);
}
struct Interface { virtual void a(); virtual void b(); virtual void c(); virtual void d(); virtual void e(); virtual void Set(int); };
extern "C" void fn_82382150(Owner *self) {
 unsigned char *state=self->state;
 fn_822B1A68(*(void **)(state+0x7c),self->Get()+0x1f0);
 ((Interface *)((void **)*(void **)(state+0x7c))[2])->Set(2);
{Impl<32> *impl;
{Member m; m.fn=fn_82382CB0; m.adjust=0;
 Bound<32> bound; bound.member=m; bound.ctx=self;
 impl=std::_Allocate(1,(Impl<32> *)0);
 impl->vt=lbl_821B3AF4; impl->f=*(const Bytes<32> *)&bound; }
 fn_82329730(self->Events()+840,Function((Callable *)impl)); }
{Impl<24> *impl;
{Member m; m.fn=fn_82382E28; m.adjust=0;
 Bound<24> bound; bound.member=m; bound.ctx=self;
 impl=std::_Allocate(1,(Impl<24> *)0);
 impl->vt=lbl_821B3B0C; impl->f=*(const Bytes<24> *)&bound; }
 fn_82329730(self->Events()+960,Function((Callable *)impl)); }
{Impl<16> *impl;
{Member m; m.fn=fn_82382FA0; m.adjust=0;
 Bound<16> bound; bound.member=m; bound.ctx=self;
 impl=std::_Allocate(1,(Impl<16> *)0);
 impl->vt=lbl_821B3B24; impl->f=*(const Bytes<16> *)&bound; }
 fn_82383300(self->Events()+1072,Function((Callable *)impl)); }
{ void *mem=fn_8265C9E0(0x98);
  unsigned char *obj=mem?fn_8238E960(mem,self->Events()+0x30):0;
  unsigned char *old=self->callbacks; self->callbacks=obj; fn_82383298(&old); }
{Impl<64> *impl;
{Member m; m.fn=fn_82377FC8; m.adjust=0;
 Bound<64> bound; bound.member=m; bound.ctx=state;
 impl=std::_Allocate(1,(Impl<64> *)0);
 impl->vt=lbl_821B3B3C; impl->f=*(const Bytes<64> *)&bound; }
{PFunction temp; temp.impl=(Callable *)impl;
 assign((PFunction *)(self->callbacks+0),temp);
 fn_82359C18((Function *)&temp); } }
{Impl<80> *impl;
{Member m; m.fn=fn_823774B8; m.adjust=0;
 Bound<80> bound; bound.member=m; bound.ctx=state;
 impl=std::_Allocate(1,(Impl<80> *)0);
 impl->vt=lbl_821B3B54; impl->f=*(const Bytes<80> *)&bound; }
{PFunction temp; temp.impl=(Callable *)impl;
 assign((PFunction *)(self->callbacks+24),temp);
 fn_82359C18((Function *)&temp); } }
{Impl<24> *impl;
{Member m; m.fn=fn_82377788; m.adjust=0;
 Bound<24> bound; bound.member=m; bound.ctx=state;
 impl=std::_Allocate(1,(Impl<24> *)0);
 impl->vt=lbl_821B3B6C; impl->f=*(const Bytes<24> *)&bound; }
{PFunction temp; temp.impl=(Callable *)impl;
 assign((PFunction *)(self->callbacks+48),temp);
 fn_82359C18((Function *)&temp); } }
{Impl<56> *impl;
{Member m; m.fn=fn_82377B20; m.adjust=0;
 Bound<56> bound; bound.member=m; bound.ctx=state;
 impl=std::_Allocate(1,(Impl<56> *)0);
 impl->vt=lbl_821B3B84; impl->f=*(const Bytes<56> *)&bound; }
{PFunction temp; temp.impl=(Callable *)impl;
 assign((PFunction *)(self->callbacks+72),temp);
 fn_82359C18((Function *)&temp); } }
{Impl<88> *impl;
{Member m; m.fn=fn_82377D58; m.adjust=0;
 Bound<88> bound; bound.member=m; bound.ctx=state;
 impl=std::_Allocate(1,(Impl<88> *)0);
 impl->vt=lbl_821B3B9C; impl->f=*(const Bytes<88> *)&bound; }
{PFunction temp; temp.impl=(Callable *)impl;
 assign((PFunction *)(self->callbacks+96),temp);
 fn_82359C18((Function *)&temp); } }
}
