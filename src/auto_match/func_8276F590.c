typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *slots[8];
    unsigned char (*equals)(Obj *self, Obj *other);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

typedef struct Handle {
    unsigned int id;
    Obj *obj;
} Handle;

unsigned char fn_8276F590(Handle *a, Handle *b)
{
    return a->id == b->id && a->obj->vt->equals(a->obj, b->obj);
}
