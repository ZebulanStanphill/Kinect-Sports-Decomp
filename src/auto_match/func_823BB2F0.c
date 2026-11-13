typedef struct Impl_823BB2F0 Impl_823BB2F0;
struct Impl_823BB2F0 {
    struct {
        void *f0;
        void (*call)(Impl_823BB2F0 *self);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_823BB2F0 *impl;
} Func_823BB2F0;

typedef struct {
    char pad[0x88];
    Func_823BB2F0 func;
} Self_823BB2F0;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_823BB2F0(Self_823BB2F0 *self)
{
    if (self->func.impl != 0) {
        Func_823BB2F0 *f = &self->func;
        if (f->impl == 0) {
            fn_82F63108();
        }
        f->impl->vt->call(f->impl);
    }
}
