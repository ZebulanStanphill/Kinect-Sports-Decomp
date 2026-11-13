typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82D1EEF8 Transform_82D1EEF8;

typedef struct Node_82D1EEF8 {
    struct Node_82D1EEF8 *next;
    char pad4[0xc];
    __vector4 v;
} Node_82D1EEF8;

typedef struct Obj_82D1EEF8 Obj_82D1EEF8;
struct Obj_82D1EEF8_vt { void (*destroy)(Obj_82D1EEF8 *self, int flags); };
struct Obj_82D1EEF8 { struct Obj_82D1EEF8_vt *vt; };

typedef struct World_82D1EEF8 {
    char pad0[0x14];
    Node_82D1EEF8 *first;
    char pad18[0x7b8 - 0x18];
    Obj_82D1EEF8 *f7b8;
} World_82D1EEF8;

extern void fn_82CE5040(__vector4 *out, const Transform_82D1EEF8 *t, const __vector4 *v);
extern void fn_82D1EE70(World_82D1EEF8 *w);

void fn_82D1EEF8(World_82D1EEF8 *w, const Transform_82D1EEF8 *t)
{
    Node_82D1EEF8 *n;
    Obj_82D1EEF8 *o;

    for (n = w->first; n != 0; n = n->next) {
        __vector4 v = n->v;
        fn_82CE5040(&n->v, t, &v);
    }
    fn_82D1EE70(w);
    o = w->f7b8;
    if (o != 0) {
        o->vt->destroy(o, 1);
    }
    w->f7b8 = 0;
}
