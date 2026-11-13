typedef struct FuncImpl_828C0D28 FuncImpl_828C0D28;

typedef struct FuncImplVtbl_828C0D28 {
    void *slots[3];
    void (*deleteThis)(FuncImpl_828C0D28 *self, int deallocate);
} FuncImplVtbl_828C0D28;

struct FuncImpl_828C0D28 {
    FuncImplVtbl_828C0D28 *vt;
};

typedef struct Function_828C0D28 {
    double space[2];
    FuncImpl_828C0D28 *impl;
} Function_828C0D28;

typedef struct SharedPtr_828C0D28 {
    void *ptr;
    void *rep;
} SharedPtr_828C0D28;

typedef struct Obj_828C0D28 {
    char pad0[0x58];
    Function_828C0D28 func;
    SharedPtr_828C0D28 sp;
} Obj_828C0D28;

extern void fn_822315A0(void *rep);

static __forceinline void Function_828C0D28_Tidy(Function_828C0D28 *f)
{
    if (f->impl != 0) {
        f->impl->vt->deleteThis(f->impl, f->impl != (FuncImpl_828C0D28 *)f);
        f->impl = 0;
    }
}

static __forceinline void SwapPtr_828C0D28(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void SharedPtr_828C0D28_Decref(SharedPtr_828C0D28 *s)
{
    if (s->rep != 0)
        fn_822315A0(s->rep);
}

static __forceinline void SharedPtr_828C0D28_Reset(SharedPtr_828C0D28 *s)
{
    SharedPtr_828C0D28 tmp;
    tmp.ptr = 0;
    tmp.rep = 0;
    SwapPtr_828C0D28(&s->rep, &tmp.rep);
    SwapPtr_828C0D28(&s->ptr, &tmp.ptr);
    SharedPtr_828C0D28_Decref(&tmp);
}

void fn_828C0D28(Obj_828C0D28 *o)
{
    SharedPtr_828C0D28_Reset(&o->sp);
    SharedPtr_828C0D28_Decref(&o->sp);
    Function_828C0D28_Tidy(&o->func);
}
