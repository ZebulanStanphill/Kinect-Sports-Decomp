typedef struct Impl_824569A8 Impl_824569A8;
struct Impl_824569A8 {
    struct {
        void *f0;
        void (*call)(Impl_824569A8 *self, void *arg);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_824569A8 *impl;
} Func_824569A8;

typedef struct {
    int unk0;
    char arg[4];
    Func_824569A8 func;
    int unk1C;
    int unk20;
} Self_824569A8;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_824569A8(Self_824569A8 *self)
{
    Func_824569A8 *f = &self->func;
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl, self->arg);
    self->unk20 = 0;
}
