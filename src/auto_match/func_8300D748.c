typedef struct Obj_8300D748 Obj_8300D748;

typedef struct ObjVtbl_8300D748 {
    void *slots[12];
    unsigned char (*check)(Obj_8300D748 *self);
} ObjVtbl_8300D748;

struct Obj_8300D748 {
    ObjVtbl_8300D748 *vt;
};

typedef struct Elem_8300D748 {
    int key;
    Obj_8300D748 *obj;
} Elem_8300D748;

typedef struct Vec_8300D748 {
    Elem_8300D748 *begin;
    Elem_8300D748 *end;
    Elem_8300D748 *cap;
} Vec_8300D748;

typedef struct Self_8300D748 {
    int pad0[3];
    Vec_8300D748 v[5];
    unsigned int time;
    unsigned char pad4c;
    unsigned char count;
} Self_8300D748;

typedef struct Clock_8300D748 {
    int pad[0x24];
    unsigned int now;
} Clock_8300D748;

extern Clock_8300D748 *lbl_832642E4;

void fn_8300D748(Self_8300D748 *self)
{
    unsigned char done = 0;
    unsigned int i;
    unsigned int j;

    for (i = 0; i < self->count && !done; i++) {
        Vec_8300D748 *v = &self->v[i];
        for (j = 0; j < (unsigned int)(v->end - v->begin) && !done; j++) {
            Obj_8300D748 **pp = &v->begin[j].obj;
            if (*pp != 0) {
                done = (*pp)->vt->check(*pp);
            }
        }
    }
    if (done) {
        unsigned int now = lbl_832642E4->now;
        if (self->time == 0 || now - self->time > 8) {
            self->time = now;
        }
    }
}
