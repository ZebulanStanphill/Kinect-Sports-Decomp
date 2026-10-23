#include "stdext/xmemory.h"
extern "C" void *memcpy(void *,const void *,unsigned int);
struct Member { void (*fn)(); int adjust; };
struct Function { unsigned char storage[16]; void *impl; };
extern "C" { char lbl_821ACDFC[]; void fn_unused(); }
struct Functor { unsigned int data[4]; };
struct Impl { void *vt;  Functor fun; };
extern "C" char lbl_821ACD74[];
struct Small { unsigned int data[4]; };
extern "C" void fn_8234E6D8(void *,Function *,void *,void *);
extern "C" unsigned int *fn_822C1E00(unsigned int *self,const Small *src,void *a,void *b) {
 self[1]=1; self[0]=(unsigned int)lbl_821ACD74; self[2]=1;
 void *where=self+4;
 if (where) {
  Small value=*src;
  Function f;
  Impl *p=std::_Allocate(1,(Impl *)0);
  f.impl=p; p->vt=lbl_821ACDFC; p->fun=*(Functor *)&value;
  fn_8234E6D8(where,&f,a,b);
 }
 return self;
}
