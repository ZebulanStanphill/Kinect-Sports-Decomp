#include "stdext/xmemory.h"
extern "C" char lbl_821B77D4[];
struct Functor { unsigned __int64 data[4]; };
struct Bytes { unsigned char data[32]; };
struct Impl { void *vt; char pad[4]; Bytes f; };
struct Owner { int pad[4]; Impl *impl; };
extern "C" Owner *fn_823F3348(Owner *self, Functor f) {
 Impl *p=(Impl *)fn_8265C9E0(sizeof(Impl));
 if (p) { p->vt=lbl_821B77D4; p->f=*(Bytes *)&f; self->impl=p; return self; }
 stdext::bad_alloc(0)._Raise();
}
