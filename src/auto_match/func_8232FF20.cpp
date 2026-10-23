#include "stdext/exception.h"
struct Member { void (*fn)(); int adjust; };
struct Functor { unsigned char data[24]; };
struct Impl { void *vtable; int pad; Functor f; };
struct Pair { void *ptr,*owner; };
struct Function { unsigned char storage[16]; Impl *impl; };
struct Bound { Member m; int *self; int pad[3]; };
extern "C" {void *fn_8265C9E0(unsigned int); void fn_82330190(); extern char lbl_821B0958[]; Pair *fn_824563F0(Pair *,int,const void *);void fn_823F2E20(void *,Pair *);void fn_822315A0(void *); extern float lbl_821CC160; }
extern "C" void fn_8232FF20(int *self) {
 Pair result;
 Impl *p;
 {
 Member m;m.fn=fn_82330190;m.adjust=0;
 Bound b; b.m=m; b.self=self;
 p=(Impl *)fn_8265C9E0(32);
 if(p) {
  p->vtable=lbl_821B0958;p->f=*(Functor *)&b;
 } else
 stdext::bad_alloc(0)._Raise();
 }
 {
  Function f;
  f.impl=p;
  fn_823F2E20((char *)self+48,fn_824563F0(&result,self[60/4],&f));
  if(result.owner) fn_822315A0(result.owner);
  *(float *)(self[3]+0x794)=lbl_821CC160;self[11]=0;self[10]=0;
 }
}
