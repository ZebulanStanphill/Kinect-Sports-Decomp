typedef struct Elem_82426B08 {
    int f0;
    int f4;
    char pad8[0x1ac - 8];
} Elem_82426B08;

typedef struct Vec_82426B08 {
    Elem_82426B08 *begin;
    Elem_82426B08 *end;
} Vec_82426B08;

typedef struct Obj_82426B08 {
    int f0;
    int f4;
    Vec_82426B08 elems;
    int f10;
    int f14;
    int index;
} Obj_82426B08;

typedef struct Owner_82426B08 {
    char pad0[0xa4];
    int fA4;
    char padA8[0x2b20 - 0xa8];
    Obj_82426B08 *current;
} Owner_82426B08;

typedef struct Self_82426B08 {
    int f0;
    Obj_82426B08 *obj;
    Owner_82426B08 *owner;
} Self_82426B08;

extern void fn_82508078(int a, const char *name, int c);
extern unsigned int lbl_83265A28;

static __forceinline int Vec_size(Vec_82426B08 *v)
{
    return v->end - v->begin;
}

void fn_82426B08(Self_82426B08 *self)
{
    Obj_82426B08 *obj;
    const char *names[3];

    union {
        unsigned int u;
        float f;
    } r;

    obj = self->obj;
    if (Vec_size(&obj->elems) == 1 && self->obj->elems.begin[obj->index].f4 != 0) {
        names[0] = "bowlerquickmatchenjoy";
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        names[1] = "bowlerquickmatchpractise";
        names[2] = "bowlerquickmatchpressure";
        r.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
        if (self->obj != self->owner->current) {
            return;
        }
        fn_82508078(self->owner->fA4, names[-(int)((r.f - 1.0f) * -3.0f)], 0);
    } else {
        if (obj != self->owner->current) {
            return;
        }
        fn_82508078(self->owner->fA4, "bowlerwelcome", 0);
    }
}
