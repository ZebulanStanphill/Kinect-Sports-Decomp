typedef struct Impl_824E1BE8 Impl_824E1BE8;
struct Impl_824E1BE8 {
    struct {
        void *f0;
        void (*call)(Impl_824E1BE8 *self, int arg, void *outer);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_824E1BE8 *impl;
} Func_824E1BE8;

typedef struct {
    char pad[0x70];
    Func_824E1BE8 func;
} Owner_824E1BE8;

typedef struct {
    char pad[0xc];
    Owner_824E1BE8 *owner;
} Self_824E1BE8;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_824E1BE8(Self_824E1BE8 *self)
{
    Owner_824E1BE8 *o = self->owner;
    if (o->func.impl != 0) {
        Func_824E1BE8 *f = &o->func;
        if (f->impl == 0) {
            fn_82F63108();
        }
        f->impl->vt->call(f->impl, 1, (char *)self - 0xf0);
    }
}
