typedef struct Impl_8233C510 Impl_8233C510;
struct Impl_8233C510 {
    struct {
        void *f0;
        int (*call)(Impl_8233C510 *self);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_8233C510 *impl;
} Func_8233C510;

typedef struct {
    char pad[0xc0];
    Func_8233C510 func;
} Self_8233C510;

extern __declspec(noreturn) void fn_82F63108(void);

int fn_8233C510(Self_8233C510 *self)
{
    if (self->func.impl != 0) {
        Func_8233C510 *f = &self->func;
        if (f->impl == 0) {
            fn_82F63108();
        }
        return f->impl->vt->call(f->impl);
    }
    return 1;
}
