typedef struct Obj_82514938 Obj_82514938;
typedef struct Target_82514938 Target_82514938;

typedef struct ObjVt_82514938 {
    void *slots[29];
    unsigned char (*isActive)(Obj_82514938 *self);
} ObjVt_82514938;

struct Obj_82514938 {
    ObjVt_82514938 *vt;
};

typedef struct TargetVt_82514938 {
    void *slot0;
    void (*handle)(Target_82514938 *self, int a, int b);
} TargetVt_82514938;

struct Target_82514938 {
    TargetVt_82514938 *vt;
};

typedef struct Handle_82514938 {
    Target_82514938 *obj;
    void *ref;
} Handle_82514938;

extern void *lbl_83297810;
extern void *fn_82511928(void);
extern void fn_82514AD8(Obj_82514938 *self, int flag);
extern void fn_82513A80(Handle_82514938 *out, void *mgr, Obj_82514938 *self);
extern void fn_822315A0(void *ref);

void fn_82514938(Obj_82514938 *self, int a, int b)
{
    Handle_82514938 h;

    if (b == 2 && self->vt->isActive(self) != 0)
        fn_82514AD8(self, 1);
    fn_82513A80(&h, lbl_83297810 ? lbl_83297810 : fn_82511928(), self);
    if (h.obj != 0)
        h.obj->vt->handle(h.obj, a, b);
    if (h.ref != 0)
        fn_822315A0(h.ref);
}
