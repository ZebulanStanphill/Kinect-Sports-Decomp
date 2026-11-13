typedef struct Impl_82308E08 Impl_82308E08;
typedef struct ImplVtbl_82308E08 {
    void *f0;
    void (*call)(Impl_82308E08 *self);
} ImplVtbl_82308E08;
struct Impl_82308E08 {
    ImplVtbl_82308E08 *vt;
};
typedef struct Func_82308E08 {
    char storage[0x10];
    Impl_82308E08 *impl;
    int pad;
} Func_82308E08;
typedef struct Obj_82308E08 {
    Func_82308E08 a;
    Func_82308E08 b;
} Obj_82308E08;

extern void fn_82F63108(void);
extern void fn_82359C18(Func_82308E08 *f);

static __forceinline void Invoke_82308E08(Func_82308E08 *f)
{
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl);
}
int fn_82308E08(Obj_82308E08 *o)
{
    if (o->a.impl != 0) {
        Invoke_82308E08(&o->a);
        fn_82359C18(&o->a);
        o->a.impl = 0;
        return 1;
    }
    if (o->b.impl != 0) {
        Func_82308E08 *f = &o->b;
        Invoke_82308E08(f);
        fn_82359C18(f);
        f->impl = 0;
        return 1;
    }
    return 0;
}
