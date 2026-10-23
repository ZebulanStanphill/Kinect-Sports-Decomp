#include "stdext/xmemory.h"
extern "C" { void fn_823D0DD8(); extern void* lbl_821B793C[]; void fn_8227CB30(void*,void*); void fn_82359C18(void*); }
struct Mfp { void(*f)(); int adjust; };
struct Data { unsigned char d[0x90]; };
struct __declspec(align(16)) Bind { Mfp m; void *self; int pad; Data data; };
struct Impl { void*vt; Bind f; };
struct Function { char buffer[16];Impl*p;int pad; };
struct Owner { char *a,*b; };
extern "C" void fn_823EC160(Owner*self, const Data *data) {
 Mfp m={fn_823D0DD8,0}; Bind f; f.m=m;f.self=self->b; f.data=*data;
 Impl *p=std::_Allocate(1,(Impl*)0);
 p->vt=lbl_821B793C;p->f=f;
 Function fun;fun.p=p;
 fn_8227CB30(self->b+0xad0,&fun);
 fn_82359C18(&fun);
}
