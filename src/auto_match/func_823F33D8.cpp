#include "stdext/xmemory.h"
struct Functor { unsigned int data[4]; };
struct Impl { void *vt; int pad; Functor f; };
struct Holder { int pad[4]; Impl *p; };
extern "C" char lbl_821B781C[];
extern "C" Holder *fn_823F33D8(Holder *self, Functor f) {
 Impl *p = (Impl *)fn_8265C9E0(sizeof(Impl));
 if (p != 0) {
  p->vt=lbl_821B781C;
  p->f=f;
  self->p=p;
  return self;
 }
 stdext::bad_alloc(0)._Raise();
}
