typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Node_82D1EF88 {
    struct Node_82D1EF88 *next;
    char pad4[0xc];
    __vector4 v;
} Node_82D1EF88;

typedef struct Obj_82D1EF88 Obj_82D1EF88;
struct Obj_82D1EF88_vt { void (*destroy)(Obj_82D1EF88 *self, int flags); };
struct Obj_82D1EF88 { struct Obj_82D1EF88_vt *vt; };

typedef struct World_82D1EF88 {
    char pad0[0x14];
    Node_82D1EF88 *first;
    char pad18[0x7b8 - 0x18];
    Obj_82D1EF88 *f7b8;
} World_82D1EF88;

extern void fn_82D1EE70(World_82D1EF88 *w);

void fn_82D1EF88(World_82D1EF88 *w, const __vector4 *scale)
{
    Node_82D1EF88 *n;
    Obj_82D1EF88 *o;

    for (n = w->first; n != 0; n = n->next) {
        __vector4 *p = &n->v;
        *p = __vmulfp(*p, *scale);
    }
    fn_82D1EE70(w);
    o = w->f7b8;
    if (o != 0) {
        o->vt->destroy(o, 1);
    }
    w->f7b8 = 0;
}
