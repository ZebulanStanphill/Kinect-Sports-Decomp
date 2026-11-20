#include "havok/hkTransform.h"

typedef struct Vt_82D50D08 Vt_82D50D08;

typedef struct Obj_82D50D08 {
    Vt_82D50D08 *vt;
} Obj_82D50D08;

struct Vt_82D50D08 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void *slot4;
    void *slot5;
    void *slot6;
    void (*f1c)(Obj_82D50D08 *self, const hkTransform *buf, float f, int y);
};

typedef struct Owner_82D50D08 {
    int pad0[5];
    Obj_82D50D08 *obj;      /* 0x14 */
    int pad18[6];
    hkTransform sub;        /* 0x30 */
} Owner_82D50D08;

extern "C" void fn_82D50D08(Owner_82D50D08 *p, const hkTransform *x, float f, int y)
{
    hkTransform buf;
    Obj_82D50D08 *o;

    buf.setMul(*x, p->sub);
    o = p->obj;
    o->vt->f1c(o, &buf, f, y);
}
