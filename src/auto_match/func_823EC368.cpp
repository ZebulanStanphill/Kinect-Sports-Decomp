#include "stdext/exception.h"
typedef __declspec(passinreg) union __vector4 {float f[4];unsigned int u[4];} V;
struct Member { union {struct {void (*fn)();int adjust;};unsigned __int64 bits;};};
struct Capture {Member method;int obj;int pad1;unsigned char flag;char pad2[7];int a;int pad3;int b;int pad4[3];V vector;};
struct Bytes {char data[64];};
struct Impl {void *vtable;int pad[3];Bytes f;};
struct Function {union {double align;char local[16];};Impl *impl;int pad;};
extern "C" {void *fn_8265C9E0(unsigned int);void fn_823D1440();extern char lbl_821B796C[];void fn_8227CB30(void *,Function *);void fn_82359C18(Function *);}
extern "C" void fn_823EC368(int *self,unsigned char flag,int a,int b,V v) {
 Member m;m.fn=fn_823D1440;m.adjust=0;
 Capture cap;cap.method=m;cap.obj=self[1];cap.vector=v;cap.flag=flag;cap.a=a;cap.b=b;
 Function f;
 Impl *p=(Impl *)fn_8265C9E0(80);
 if(p) {p->vtable=lbl_821B796C;p->f=*(Bytes *)&cap;f.impl=p;
 fn_8227CB30((char *)self[1]+0xb00,&f);fn_82359C18(&f);return;}
 stdext::bad_alloc(0)._Raise();
}
