#include "havok/hkTransform.h"

typedef struct Obj_82D3D208 Obj_82D3D208;

typedef struct Vtbl_82D3D208 {
    void *slots[7];
    void (*f1c)(Obj_82D3D208 *self, const hkTransform *buf, float f, int x);
} Vtbl_82D3D208;

struct Obj_82D3D208 {
    Vtbl_82D3D208 *vt;
};

typedef struct Owner_82D3D208 {
    int pad0[6];
    Obj_82D3D208 *sub;   /* 0x18 */
    int pad1c;
    hkTransform data;    /* 0x20 */
} Owner_82D3D208;

extern "C" void fn_82D3D208(Owner_82D3D208 *p, const hkTransform *a, float f, int x)
{
    hkTransform buf;
    Obj_82D3D208 *s;

    buf.setMul(*a, p->data);
    s = p->sub;
    s->vt->f1c(s, &buf, f, x);
}
