#include "stdext/exception.h"
extern "C" {
void fn_82BA02A8(const stdext::exception &e);
extern char lbl_8219701C[];
unsigned int *fn_828ABE08(unsigned int);
}
struct Obj_828AC140;
struct Vt_828AC140 { int pad[4]; void (*f10)(Obj_828AC140 *, unsigned int, unsigned int *); };
struct Obj_828AC140 { Vt_828AC140 *vt; };
struct E_828AC140 { const void *vt; const char *msg; };

extern "C" void fn_828AC140(Obj_828AC140 *o, unsigned int a, unsigned int b)
{
  unsigned int *p = fn_828ABE08(b);
  if (p == 0) {
    E_828AC140 e;
    e.msg = "bad cast";
    e.vt = lbl_8219701C;
    fn_82BA02A8(*(stdext::exception *)&e);
    ((stdext::exception *)&e)->stdext::exception::~exception();
  }
  unsigned int v = *p;
  o->vt->f10(o, a, &v);
}
