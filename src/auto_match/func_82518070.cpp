#include <exception>
#include <typeinfo>

namespace Live { namespace NetObj { class LiveNetObj_c {}; } }

extern "C" {
int fn_82359C18(void *);
void *fn_82517ED8(void *);
void *fn_8265C9E0(int);
void fn_8265CA20(void *);
void *fn_828E53D8(void *, const type_info *);
void fn_828E91A8(void *);
void *fn_828E9B20(void *, void *);
void *fn_82BA02A8(void *);

struct Obj_82518070 {
  char pad[0x78];
  void *a78;
  void *a7c;
};
struct Tmp_82518070 { int v[4]; };
struct Res_82518070 { char pad[0x10]; int v; };

void fn_82518070(Obj_82518070 *o)
{
  Tmp_82518070 tmp;
  Res_82518070 *p = (Res_82518070 *)fn_82517ED8(&tmp);
  unsigned char b = p->v != 0;
  fn_82359C18(&tmp);
  if (b) {
    void *m = fn_8265C9E0(0x40);
    void *r;
    if (m != 0) r = fn_828E9B20(m, o); else r = 0;
    void *old = o->a78;
    o->a78 = r;
    if (old != 0) {
      fn_828E91A8(old);
      fn_8265CA20(old);
    }
    o->a7c = fn_828E53D8(fn_82BA02A8(o->a78), &typeid(Live::NetObj::LiveNetObj_c));
  }
}
}
