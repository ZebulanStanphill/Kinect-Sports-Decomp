typedef struct Obj_82E71C78 Obj_82E71C78;
typedef struct ObjVtbl_82E71C78 {
    void *slots[13];
    int (*getId)(Obj_82E71C78 *self);
} ObjVtbl_82E71C78;
struct Obj_82E71C78 {
    ObjVtbl_82E71C78 *vt;
};

extern int fn_82E71308(Obj_82E71C78 *o, int a, int id, int b, int c, int d);

int fn_82E71C78(Obj_82E71C78 *o, int a, int b, int c)
{
    return fn_82E71308(o, a, o->vt->getId(o), b, c, 0);
}
