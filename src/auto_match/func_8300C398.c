typedef struct Obj_8300C398 Obj_8300C398;

typedef struct Vtbl_8300C398 {
    void *pad0[18];
    void (*f48)(Obj_8300C398 *self, float f, int a, int b, int c);
    void *pad4c[14];
    unsigned char (*f84)(Obj_8300C398 *self);
} Vtbl_8300C398;

struct Obj_8300C398 {
    Vtbl_8300C398 *vt;
    int pad04[5];
    unsigned short count;
};

typedef struct Entry_8300C398 {
    int key;
    Obj_8300C398 *obj;
} Entry_8300C398;

typedef struct Self_8300C398 {
    int pad00[18];
    Entry_8300C398 *begin;
    Entry_8300C398 *end;
} Self_8300C398;

void fn_8300C398(Self_8300C398 *self, float f, int a, int b, int c)
{
    Entry_8300C398 *e;

    for (e = self->begin; e != self->end; e++) {
        if (e->obj->vt->f84(e->obj) == 0) {
            Obj_8300C398 *o = e->obj;
            if (o->count != 0) {
                o->vt->f48(o, f, a, b, c);
            }
        }
    }
}
