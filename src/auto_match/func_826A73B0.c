typedef struct Obj_826A73B0 Obj_826A73B0;

typedef struct ObjVtbl_826A73B0 {
    void *slots[16];
    char *(*Get)(Obj_826A73B0 *self);
} ObjVtbl_826A73B0;

struct Obj_826A73B0 {
    ObjVtbl_826A73B0 *vt;
};

typedef struct Owner_826A73B0 {
    char pad0[0x74];
    Obj_826A73B0 *obj;
} Owner_826A73B0;

char *fn_826A73B0(Owner_826A73B0 *o)
{
    if (o->obj != 0) {
        return o->obj->vt->Get(o->obj) + 0x18;
    }
    return 0;
}
