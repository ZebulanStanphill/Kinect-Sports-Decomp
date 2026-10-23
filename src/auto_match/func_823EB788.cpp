#include "stdext/xmemory.h"
struct Member { void (*fn)(); int adjust; };
struct Function { unsigned char storage[16]; void *impl; };
extern "C" { char lbl_821B7864[]; void fn_823CC9F0(); }
struct Payload { unsigned char d[76]; };
struct Bound { Member m; unsigned char *ctx; int pad; unsigned char flag; char pad2[7]; Payload payload; int tail; };
struct Impl { void *vt; int pad; Bound fun; };
struct Owner { void *a; unsigned char *b; };
extern "C" {
 void fn_8227CB30(void *, Function *);
 void fn_82359C18(Function *);
}
extern "C" void fn_823EB788(Owner *self,unsigned char flag,const Payload *src) {
 Impl *impl;
 {
 Member m={fn_823CC9F0,0};
 Bound b; b.m=m; b.ctx=self->b; b.flag=flag; b.payload=*src;
 impl=std::_Allocate(1,(Impl *)0);
 impl->vt=lbl_821B7864;
 impl->fun=b;
 }
 {
 Function f;
 f.impl=impl;
 fn_8227CB30(self->b+0xd10,&f);
 fn_82359C18(&f);
 }
}
