#include "stdext/xmemory.h"
struct Functor { unsigned int data[4]; };
struct Impl { void *vt; int pad; Functor f; };
struct Holder { int pad[4]; Impl *p; };
extern "C" char lbl_821AF4BC[];
extern "C" Holder *fn_82312D18(Holder *self, Functor f) {
 Impl *p = (Impl *)fn_8265C9E0(sizeof(Impl));
 if (p != 0) {
  p->vt=lbl_821AF4BC;
  p->f=f;
  self->p=p;
  return self;
 }
 stdext::bad_alloc(0)._Raise();
}
