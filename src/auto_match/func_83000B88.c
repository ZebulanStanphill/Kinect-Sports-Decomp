typedef struct Obj_83000B88 Obj_83000B88;
typedef struct {
    char pad[0xac];
    void (*f)(Obj_83000B88 *self, int a, int b, float x, int c, int d);
} VT_83000B88;
typedef struct { int pad0[3]; int fc; char pad1[0x18]; float f28; } Item_83000B88;
typedef struct { int unk; Item_83000B88 *item; } Ent_83000B88;
typedef struct { Ent_83000B88 *begin, *end; } Vec_83000B88;
struct Obj_83000B88 {
    VT_83000B88 *vt;
    char pad4[0x20];
    void *f24;
    char pad28[0x2c];
    Vec_83000B88 *vec;
};

void fn_83000B88(Obj_83000B88 *o, int p2, int p3)
{
    float zero = 0.0f;
    Vec_83000B88 *v = o->vec;
    if (v != 0) {
        Ent_83000B88 *e = v->begin;
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
