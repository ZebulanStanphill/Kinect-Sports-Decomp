#include "stdext/xmemory.h"
struct __declspec(align(16)) Functor { unsigned char data[80]; };
struct Impl { void *vt; Functor f; };
struct Holder { int pad[4]; Impl *p; };
extern "C" char lbl_821B623C[];
extern "C" Holder *fn_823D2008(Holder *self, Functor f) {
 Impl *p = (Impl *)fn_8265C9E0(sizeof(Impl));
 if (p != 0) {
  p->vt=lbl_821B623C;
  p->f=f;
  self->p=p;
  return self;
 }
 stdext::bad_alloc(0)._Raise();
}
