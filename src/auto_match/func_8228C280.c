typedef struct Impl_8228C280 Impl_8228C280;
struct Impl_8228C280 {
    struct {
        void *f0;
        void (*call)(Impl_8228C280 *self);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_8228C280 *impl;
    int pad14;
} Func_8228C280;

typedef struct {
    char pad[0x30];
    Func_8228C280 funcs[1];
} Self_8228C280;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_8228C280(Self_8228C280 *self, int index)
{
    if (self->funcs[index].impl != 0) {
        Func_8228C280 *f = &self->funcs[index];
        if (f->impl == 0) {
            fn_82F63108();
        }
        f->impl->vt->call(f->impl);
    }
}
