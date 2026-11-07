typedef struct Vtbl_8300C438 Vtbl_8300C438;

typedef struct Obj_8300C438 {
    Vtbl_8300C438 *vt;
} Obj_8300C438;

struct Vtbl_8300C438 {
    void *pad[34];
    int (*f88)(Obj_8300C438 *self);
    void (*f8c)(Obj_8300C438 *self);
};

typedef struct Entry_8300C438 {
    int key;
    Obj_8300C438 *obj;
} Entry_8300C438;

typedef struct Owner_8300C438 {
    char pad[0x48];
    Entry_8300C438 *begin;
    Entry_8300C438 *end;
} Owner_8300C438;

int fn_8300C438(Owner_8300C438 *o)
{
    Entry_8300C438 *it;
    Entry_8300C438 *j;
    int r;

    it = o->begin;
    r = 1;
    while (it != o->end) {
        r = it->obj->vt->f88(it->obj);
        if (r != 1)
            break;
        it++;
    }
    if (r != 1) {
        for (j = o->begin; j != it; j++) {
            j->obj->vt->f8c(j->obj);
        }
    }
    return r;
}
