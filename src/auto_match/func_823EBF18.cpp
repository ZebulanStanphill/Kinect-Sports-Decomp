#include "stdext/xmemory.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" { void fn_823CD698(); extern void* lbl_821B790C[]; void fn_8227CB30(void*,void*); void fn_82359C18(void*); char* fn_823F05B8(void*,void*); void fn_823831D8(void*); }
struct Mfp { void(*f)(); int adjust; };
struct Key { void *a; int b; };
struct S48 { __int64 v[6]; };
struct Sh { unsigned short v; };
struct S32 { __int64 v[4]; };
struct S96 { unsigned char d[0x60]; };
struct __declspec(align(16)) Bind { Mfp m; void *self; int pad; __vector4 v; S48 a; int b; int pad2[3]; Sh c; short pad3[7]; S32 d; S96 e; int f; };
struct Impl { void*vt; Bind f; };
struct Function { char buffer[16];Impl*p;int pad; };
struct Owner { char *a,*b; };
extern "C" void fn_823EBF18(Owner*self, const S48 *a, int b, const Sh *c, const S32 *d, const S96 *e, int f, __vector4 v) {
 Mfp m={fn_823CD698,0}; Bind bd; bd.m=m;bd.self=self->b; bd.v=v; for(int i=0;i<6;i++) bd.a.v[i]=a->v[i]; bd.b=b; bd.c=*c; bd.d=*d; bd.e=*e; bd.f=f;
 Impl *p=std::_Allocate(1,(Impl*)0);
 p->vt=lbl_821B790C;p->f=bd;
 Function fun;fun.p=p;
 Key key; key.a=((const Key*)a)->a; key.b=((const Key*)a)->b; char *entry=fn_823F05B8(self->b+0xa58,&key);fn_8227CB30(entry+0x18,&fun);
 fn_82359C18(&fun);
 fn_823831D8(self->a+0x710);
}
