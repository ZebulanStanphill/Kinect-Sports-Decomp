typedef struct Obj_82EED7E0 Obj_82EED7E0;
typedef struct ObjVt_82EED7E0 {
    void *pad[3];
    int (*fc)(Obj_82EED7E0 *self);
} ObjVt_82EED7E0;
struct Obj_82EED7E0 {
    ObjVt_82EED7E0 *vt;
    int *vbtable;
    char pad8[0x74 - 8];
    int active;
};

int fn_82EED7E0(Obj_82EED7E0 *self)
{
    int r = 0;
    int state;
    if (self->active != 0) {
        state = *(int *)((char *)self + self->vbtable[1] + 8);
        if (state == 3 || state == 1)
            r = self->vt->fc(self);
    }
    return r;
}
