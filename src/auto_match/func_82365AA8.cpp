#include "stdext/xmemory.h"
extern "C" char lbl_821B2C8C[];
struct Functor { unsigned char data[24]; };
struct Impl { void *vt; char pad[4]; Functor f; };
struct Owner { int pad[4]; Impl *impl; };
extern "C" Owner * fn_82365AA8(Owner *self, Functor f) {
 Impl *p = (Impl *)fn_8265C9E0(sizeof(Impl));
 if (p != 0) {
  p->vt = lbl_821B2C8C;
  p->f = f;
  self->impl = p;
  return self;
 }
 stdext::bad_alloc(0)._Raise();
}
