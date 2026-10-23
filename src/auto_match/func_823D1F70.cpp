#include "stdext/xmemory.h"
extern "C" char lbl_821B6224[];
struct __declspec(align(16)) Functor { unsigned __int64 data[6]; };
struct Bytes { unsigned char data[48]; };
struct Impl { void *vt; char pad[12]; Bytes f; };
struct Owner { int pad[4]; Impl *impl; };
extern "C" Owner *fn_823D1F70(Owner *self, Functor f) {
 Impl *p=(Impl *)fn_8265C9E0(sizeof(Impl));
 if (p) { p->vt=lbl_821B6224; p->f=*(Bytes *)&f; self->impl=p; return self; }
 stdext::bad_alloc(0)._Raise();
}
