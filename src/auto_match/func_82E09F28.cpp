#include "havok/hkClass.h"

typedef struct VT_82E09F28 VT_82E09F28;
typedef struct Obj_82E09F28 { VT_82E09F28 *vt; } Obj_82E09F28;
struct VT_82E09F28 {
  void *s0[4];
  unsigned (*f10)(Obj_82E09F28 *, const char *);
  void *s14[2];
  void (*f1c)(Obj_82E09F28 *, const hkClass *, int);
};
extern "C" const char *fn_82CEAC20(const hkClass *);
extern "C" const hkClass *fn_82CEAC28(const hkClass *);
extern "C" int fn_82CEAF18(const hkClass *);
extern "C" const hkClassMember *fn_82CEAF20(const hkClass *, int);

extern "C" void fn_82E09F28(Obj_82E09F28 *o, const hkClass *p)
{
  int i;
  if (p != 0) {
    if (o->vt->f10(o, fn_82CEAC20(p)) == 0) {
      o->vt->f1c(o, p, 0);
      fn_82E09F28(o, fn_82CEAC28(p));
      for (i = 0; i < fn_82CEAF18(p); i++) {
        fn_82E09F28(o, fn_82CEAF20(p, i)->getClass());
      }
    }
  }
}
