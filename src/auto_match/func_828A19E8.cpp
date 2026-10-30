#include "stdext/exception.h"
extern "C" {
void fn_82BA02A8(const stdext::exception &e);
extern char lbl_821AD03C[];
}
struct Vt_828A19E8 { int pad; void (*invoke)(void *, int); };
struct Fn_828A19E8 { unsigned int vt; int pad; };
struct E_828A19E8 { const void *vt; const char *msg; };

extern "C" void fn_828A19E8(Fn_828A19E8 *f, int arg)
{
  if (f->vt == 0) {
    E_828A19E8 e;
    e.msg = "call to empty boost::function";
    e.vt = lbl_821AD03C;
    fn_82BA02A8(*(stdext::exception *)&e);
    ((stdext::exception *)&e)->stdext::exception::~exception();
  }
  ((Vt_828A19E8 *)(f->vt & ~1u))->invoke((char *)f + 8, arg);
}
