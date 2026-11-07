typedef struct Iface_823A3280 Iface_823A3280;

typedef struct IfaceVtbl_823A3280 {
    void *pad[30];
    int (*f78)(Iface_823A3280 *self);
    int (*f7c)(Iface_823A3280 *self, int arg);
} IfaceVtbl_823A3280;

struct Iface_823A3280 {
    IfaceVtbl_823A3280 *vt;
};

typedef struct Obj_823A3280 {
    char pad0[8];
    int **list;
    char pad0c[0x1e4 - 0x0c];
    int f1e4;
    char pad1e8[0x228 - 0x1e8];
    int f228;
    char pad22c[0x2e0 - 0x22c];
    Iface_823A3280 *iface;
} Obj_823A3280;

typedef struct Outer_823A3280 {
    char pad0[8];
    Obj_823A3280 *obj;
} Outer_823A3280;

extern int fn_822AA770(int a);

int fn_823A3280(Outer_823A3280 *self)
{
    Obj_823A3280 *o = self->obj;
    if (o->f228 == 0 && o->iface->vt->f78(o->iface) != 0) {
        int *arr = *self->obj->list;
        int flags[2];
        flags[0] = fn_822AA770(arr[0]) != 0;
        flags[1] = fn_822AA770(arr[1]) != 0;
        if ((flags[0] && flags[1]) ||
            flags[self->obj->iface->vt->f7c(self->obj->iface, self->obj->f1e4)] == 0)
            return 1;
    }
    return 0;
}
