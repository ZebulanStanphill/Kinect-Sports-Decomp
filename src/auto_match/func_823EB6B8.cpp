#include "stdext/xmemory.h"
union Member { struct { void (*fn)(); int adjust; } s; unsigned __int64 bits; };
struct Binder { unsigned int member[2]; void *self; int pad; };
struct Impl { void *vt; int pad; Binder f; };
struct Function { char storage[16]; Impl *p; };
extern "C" { void fn_823D17A0(); extern char lbl_821B781C[]; void fn_8227CB30(void*,Function*); void fn_82359C18(Function*); }
extern "C" void fn_823EB6B8(void **self) {
 Member member; member.s.fn=fn_823D17A0; member.s.adjust=0;
 Binder f; *(Member*)&f.member=member; f.self=self[1];
 Function cb;
 Impl *p=std::_Allocate(1,(Impl*)0); cb.p=p; p->vt=lbl_821B781C; p->f=f;
 fn_8227CB30((char*)self[1]+0xce0,&cb);
 fn_82359C18(&cb);
}
