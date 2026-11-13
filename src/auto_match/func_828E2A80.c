typedef struct FuncImpl_828E2A80 FuncImpl_828E2A80;

typedef struct FuncImplVtbl_828E2A80 {
    void *slots[3];
    void (*deleteThis)(FuncImpl_828E2A80 *self, int deallocate);
} FuncImplVtbl_828E2A80;

struct FuncImpl_828E2A80 {
    FuncImplVtbl_828E2A80 *vt;
};

typedef struct Function_828E2A80 {
    double space[2];
    FuncImpl_828E2A80 *impl;
} Function_828E2A80;

typedef struct Obj_828E2A80 {
    Function_828E2A80 a;
    Function_828E2A80 b;
} Obj_828E2A80;

static __forceinline void Function_828E2A80_Tidy(Function_828E2A80 *f)
{
    if (f->impl != 0) {
        f->impl->vt->deleteThis(f->impl, f->impl != (FuncImpl_828E2A80 *)f);
        f->impl = 0;
    }
}

void fn_828E2A80(Obj_828E2A80 *o)
{
    Function_828E2A80_Tidy(&o->b);
    Function_828E2A80_Tidy(&o->a);
}
