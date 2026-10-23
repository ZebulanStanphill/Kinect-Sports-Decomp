#include "stdext/xmemory.h"
inline void *operator new(unsigned int, void *p) throw() { return p; }
struct First { char data[32]; };
extern "C" void fn_822C5B18(First *, const First *);
struct Tail { char data[144]; };
struct __declspec(align(16)) Functor { First first; Tail tail; void operator=(const Functor &x) { fn_822C5B18(&first,&x.first); tail=x.tail; } };
struct __declspec(align(16)) Impl { void *vt; Functor f; };
extern "C" char lbl_821B48E8[];
extern "C" void *fn_823939C0(Impl *self, void *where) {
 if (!where) where=std::_Allocate(1,(Impl *)0);
 Impl *p=(Impl *)where;
 p->vt=lbl_821B48E8;
 p->f=self->f;
 return where;
}
