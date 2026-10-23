#include "stdext/xmemory.h"
extern "C" { extern void* lbl_821C128C[]; void fn_824E24D0(); void fn_824D4F18(void*); void fn_82359C18(void*); void*memcpy(void*,const void*,unsigned); }
struct Mfp {union{struct{void(*f)();int adj;};unsigned __int64 raw;};};
struct Functor { unsigned char data[40]; };struct Impl{void**vt;int pad;Functor f;};
struct __declspec(align(16)) Function {
 char buf[16];Impl*p;
 __forceinline void assign(Function &s) {
 if(this!=&s) {
 if(p) { ((void(*)(Impl*,bool))p->vt[3])(p,(void*)p!=(void*)this);p=0; }
 if(!s.p)p=0;
 else if((void*)s.p==(void*)&s) p=((Impl*(*)(Impl*,void*))s.p->vt[0])(s.p,this);
 else {p=s.p;s.p=0;}
 }
 }
};
struct F { Mfp m;void*self;int pad;char extra[24]; };
struct Owner { void **vt; };
extern "C" void fn_824E23B0(Owner*self) {
 fn_824D4F18(self);
 Mfp m={fn_824E24D0,0};F f;f.m=m;f.self=self;
 Impl*p=std::_Allocate(1,(Impl*)0);
 p->vt=lbl_821C128C;p->f=*(const Functor*)&f;
 Function fun;fun.p=p;
 char*obj=((char*(*)(Owner*))self->vt[18])(self);
 ((Function*)(obj+128))->assign(fun);
 fn_82359C18(&fun);
}
