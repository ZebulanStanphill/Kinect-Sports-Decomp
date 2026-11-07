typedef struct Obj_82FB03A0 Obj_82FB03A0;

typedef struct Vtbl_82FB03A0 {
    char pad[0x88];
    int (*Begin)(Obj_82FB03A0 *self);
    void (*Undo)(Obj_82FB03A0 *self);
} Vtbl_82FB03A0;

struct Obj_82FB03A0 {
    Vtbl_82FB03A0 *vt;
};

typedef struct Entry_82FB03A0 {
    int key;
    Obj_82FB03A0 *obj;
} Entry_82FB03A0;

typedef struct Owner_82FB03A0 {
    char pad[0x7c];
    Entry_82FB03A0 *begin;
    Entry_82FB03A0 *end;
} Owner_82FB03A0;

int fn_82FB03A0(Owner_82FB03A0 *self)
{
    Entry_82FB03A0 *it;
    Entry_82FB03A0 *j;
    int r;

    r = 1;
    for (it = self->begin; it != self->end; it++) {
        r = it->obj->vt->Begin(it->obj);
        if (r != 1)
            break;
    }
    if (r != 1) {
        for (j = self->begin; j != it; j++) {
            j->obj->vt->Undo(j->obj);
        }
    }
    return r;
}
