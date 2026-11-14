typedef struct Obj_826894B0 Obj_826894B0;
typedef struct Binder_826894B0 Binder_826894B0;
typedef struct Factory_826894B0 Factory_826894B0;

typedef struct ObjVtbl_826894B0 {
    void *slot0[11];
    void (*Attach)(Obj_826894B0 *self, Binder_826894B0 *binder);
} ObjVtbl_826894B0;
struct Obj_826894B0 {
    ObjVtbl_826894B0 *vt;
};

typedef struct BinderVtbl_826894B0 {
    void *slot0[2];
    unsigned char (*Bind)(Binder_826894B0 *self, Factory_826894B0 *factory);
} BinderVtbl_826894B0;
struct Binder_826894B0 {
    BinderVtbl_826894B0 *vt;
};

typedef struct FactoryVtbl_826894B0 {
    void *slot0[2];
    Obj_826894B0 *(*Create)(Factory_826894B0 *self);
} FactoryVtbl_826894B0;
struct Factory_826894B0 {
    FactoryVtbl_826894B0 *vt;
};

typedef struct Self_826894B0 {
    char pad0[8];
    Binder_826894B0 binder;
    Obj_826894B0 *obj;
} Self_826894B0;

extern void fn_82670230(Obj_826894B0 *obj);

static __forceinline void Reset(Obj_826894B0 **slot, Obj_826894B0 *obj)
{
    if (*slot != 0)
        fn_82670230(*slot);
    *slot = obj;
}

Obj_826894B0 *fn_826894B0(Self_826894B0 *self, Factory_826894B0 *factory)
{
    if ((int)self->obj != 0)
        return self->obj;
    Reset(&self->obj, factory->vt->Create(factory));
    if ((int)self->obj != 0) {
        if (self->binder.vt->Bind(&self->binder, factory))
            self->obj->vt->Attach(self->obj, &self->binder);
        else
            Reset(&self->obj, 0);
    }
    return self->obj;
}
