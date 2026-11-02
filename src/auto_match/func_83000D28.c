typedef struct Obj_83000D28 Obj_83000D28;
typedef struct {
    char pad[0xb4];
    void (*f)(Obj_83000D28 *self, int a, int b, float x, int c, int d);
} VT_83000D28;
typedef struct { int pad0[3]; int fc; char pad1[0x1c]; float f28; } Item_83000D28;
typedef struct { int unk; Item_83000D28 *item; } Ent_83000D28;
typedef struct { Ent_83000D28 *begin, *end; } Vec_83000D28;
struct Obj_83000D28 {
    VT_83000D28 *vt;
    char pad4[0x20];
    void *f24;
    char pad28[0x2c];
    Vec_83000D28 *vec;
};

void fn_83000D28(Obj_83000D28 *o, int p2, int p3)
{
    float zero = 0.0f;
    Vec_83000D28 *v = o->vec;
    if (v != 0) {
        Ent_83000D28 *e = v->begin;
        if (e != v->end) {
            do {
                if (e->item->f28 != zero)
                    o->vt->f(o, e->item->fc, 0, zero, p2, p3);
                e++;
            } while (e != o->vec->end);
        }
    }
    if (o->f24 != 0)
        o->vt->f(o, 0, 0, zero, p2, p3);
}
