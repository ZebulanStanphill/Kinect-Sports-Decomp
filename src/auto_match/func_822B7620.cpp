#include "stdext/xmemory.h"
extern "C" void *memcpy(void *,const void *,unsigned int);
struct Member { void (*fn)(); int adjust; };
struct Function { unsigned char storage[16]; void *impl; };
extern "C" { char lbl_821ACA0C[]; void fn_822C8860(); }
struct Functor { unsigned char data[24]; };
struct Impl { void *vt; char pad[4]; Functor fun; };
extern "C" void fn_82359C18(Function *);
struct Bound { Member m; void *ctx; char pad[12]; };
extern "C" void fn_822B7620(unsigned char *self) {
 void *ctx=*(void **)(self+0x114);
 if (ctx) {
  Member m={fn_822C8860,0};
  Bound b; b.ctx=ctx; b.m=m;
  Function *out=(Function *)(self+0x140);
  fn_82359C18(out);
  Impl *p=(Impl *)fn_8265C9E0(sizeof(Impl));
  if (p) {
   p->vt=lbl_821ACA0C; p->fun=*(const Functor *)&b; out->impl=p;
  } else stdext::bad_alloc(0)._Raise();
 }
}
