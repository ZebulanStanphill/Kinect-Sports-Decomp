typedef struct Impl_82361140 Impl_82361140;
struct Impl_82361140 {
    struct {
        void *f0;
        void (*call)(Impl_82361140 *self);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_82361140 *impl;
} Func_82361140;

typedef struct {
    char pad[0x8];
    Func_82361140 func;
} Self_82361140;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_82361140(Self_82361140 *self)
{
    Func_82361140 *f = &self->func;
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl);
}
