#include "stdext/xmemory.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" { void fn_823CD178(); extern void* lbl_821B78F4[]; void fn_8227CB30(void*,void*); void fn_82359C18(void*); char* fn_823F05B8(void*,void*); void fn_823831D8(void*); }
struct Mfp { void(*f)(); int adjust; };
struct Key { void *a; int b; };
struct S48 { __int64 v[6]; };
struct S76 { unsigned char d[76]; };
struct __declspec(align(16)) Bind { Mfp m; void *self; int pad; __vector4 v1; S48 a; __vector4 v2; float t; int pad1[3]; int arg; int pad2[3]; S76 blob; int pad3; int extra; int pad4[3]; };
struct Impl { void*vt; Bind f; };
struct Function { char buffer[16];Impl*p;int pad; };
struct Owner { char *a,*b; };
extern "C" void fn_823EBE00(Owner*self, const S48 *a, __vector4 v1, __vector4 v2, float t, int arg, const S76 *blob, int extra) {
 Mfp m={fn_823CD178,0}; Bind bd; bd.m=m;bd.self=self->b; bd.v1=v1; for(int i=0;i<6;i++) bd.a.v[i]=a->v[i]; bd.v2=v2; bd.t=t; bd.arg=arg; bd.blob=*blob; bd.extra=extra;
 Impl *p=std::_Allocate(1,(Impl*)0);
 p->vt=lbl_821B78F4;p->f=bd;
 Function fun;fun.p=p;
 Key key; key.a=((const Key*)a)->a; key.b=((const Key*)a)->b; char *entry=fn_823F05B8(self->b+0xa48,&key);fn_8227CB30(entry+0x18,&fun);
 fn_82359C18(&fun);
 fn_823831D8(self->a+0x710);
}
