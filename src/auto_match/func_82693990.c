typedef struct Obj_82693990 Obj_82693990;

typedef struct ObjVtbl_82693990 {
    void *slot0[18];
    void (*slot48)(Obj_82693990 *self);
} ObjVtbl_82693990;

struct Obj_82693990 {
    ObjVtbl_82693990 *vt;
};

typedef struct Ref_82693990 {
    void *vt;
    int refs;
} Ref_82693990;

typedef struct Self_82693990 Self_82693990;

typedef struct SelfVtbl_82693990 {
    void *slot0[2];
    unsigned char (*slot8)(Self_82693990 *self);
} SelfVtbl_82693990;

struct Self_82693990 {
    SelfVtbl_82693990 *vt;
    int unk4;
    Obj_82693990 *obj;
};

extern char lbl_82005FD0[];
extern void *lbl_831E7E64;
extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void fn_8267C4F0(Obj_82693990 *obj);

static __forceinline Ref_82693990 *newRef(void)
{
    Ref_82693990 *p = fn_8267B890(lbl_831E7E64, 8, 0);

    if (p != 0) {
        p->refs = 1;
        p->vt = lbl_82005FD0;
        return p;
    }
    return 0;
}

unsigned char fn_82693990(Self_82693990 *self)
{
    Ref_82693990 *ref;

    if (self->vt->slot8(self) != 0) {
        self->obj->vt->slot48(self->obj);
        ref = newRef();
        if (self->obj != 0) {
            fn_8267C4F0(self->obj);
        }
        self->obj = (Obj_82693990 *)ref;
        return 1;
    }
    return 0;
}
