typedef struct FuncImpl_82605028 FuncImpl_82605028;

typedef struct FuncImplVtbl_82605028 {
    void *slots[3];
    void (*deleteThis)(FuncImpl_82605028 *self, int deallocate);
} FuncImplVtbl_82605028;

struct FuncImpl_82605028 {
    FuncImplVtbl_82605028 *vt;
};

typedef struct Function_82605028 {
    double space[2];
    FuncImpl_82605028 *impl;
} Function_82605028;

typedef struct Obj_82605028 {
    char *vt;
    char pad04[0x58 - 0x4];
    Function_82605028 a;   /* 0x58 */
    Function_82605028 b;   /* 0x70 */
    char pad88[0xa0 - 0x88];
    int sub;               /* 0xa0 */
} Obj_82605028;

extern char lbl_821CA878[];
extern void fn_8251E400(void *p);

static __forceinline void Function_82605028_Tidy(Function_82605028 *f)
{
    if (f->impl != 0) {
        f->impl->vt->deleteThis(f->impl, f->impl != (FuncImpl_82605028 *)f);
        f->impl = 0;
    }
}

void fn_82605028(Obj_82605028 *o)
{
    o->vt = lbl_821CA878;
    fn_8251E400(&o->sub);
    Function_82605028_Tidy(&o->b);
    Function_82605028_Tidy(&o->a);
}
