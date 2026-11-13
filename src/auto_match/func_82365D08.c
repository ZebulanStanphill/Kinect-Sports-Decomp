typedef struct FuncImpl_82365D08 FuncImpl_82365D08;

typedef struct FuncImplVtbl_82365D08 {
    void *slots[3];
    void (*deleteThis)(FuncImpl_82365D08 *self, int deallocate);
} FuncImplVtbl_82365D08;

struct FuncImpl_82365D08 {
    FuncImplVtbl_82365D08 *vt;
};

typedef struct Function_82365D08 {
    double space[2];
    FuncImpl_82365D08 *impl;
} Function_82365D08;

typedef struct Inner_82365D08 {
    int pad0;
    char a[0x10];
    char b[0x14];
    Function_82365D08 f1;
    Function_82365D08 f2;
    int handle;
    int active;
} Inner_82365D08;

typedef struct Obj_82365D08 {
    char pad0[0x10];
    Inner_82365D08 inner;
} Obj_82365D08;

extern void fn_82264CE0(int p1, const char *p2, int p3, int p4, int p5, int p6, int p7, int p8,
                        int p9, int p10, int p11, int p12);
extern void fn_82359BB0(void *p);

static __forceinline void Function_82365D08_Tidy(Function_82365D08 *f)
{
    if (f->impl != 0) {
        f->impl->vt->deleteThis(f->impl, f->impl != (FuncImpl_82365D08 *)f);
        f->impl = 0;
    }
}

void fn_82365D08(Obj_82365D08 *self)
{
    Inner_82365D08 *in = &self->inner;

    if (in->active != 0)
        fn_82264CE0(in->handle, "Ended Early", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Function_82365D08_Tidy(&in->f2);
    Function_82365D08_Tidy(&in->f1);
    fn_82359BB0(in->b);
    fn_82359BB0(in->a);
}
