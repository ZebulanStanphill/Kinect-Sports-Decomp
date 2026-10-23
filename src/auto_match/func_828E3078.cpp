#include "stdext/xmemory.h"
extern "C" char lbl_82027198[];
struct Functor { unsigned int data[6]; };
struct Impl { void *vt; char pad[4]; Functor f; };
struct Owner { int pad[4]; Impl *impl; };
extern "C" void fn_828E3078(Owner *self, Functor f) {
 Impl *p = (Impl *)fn_8265C9E0(sizeof(Impl));
 if (p != 0) {
  p->vt = lbl_82027198;
  p->f = f;
  self->impl = p;
  return;
 }
 stdext::bad_alloc(0)._Raise();
}
