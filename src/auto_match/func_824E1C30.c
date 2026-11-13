typedef struct Impl_824E1C30 Impl_824E1C30;
struct Impl_824E1C30 {
    struct {
        void *f0;
        void (*call)(Impl_824E1C30 *self, int arg, void *outer);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_824E1C30 *impl;
} Func_824E1C30;

typedef struct {
    char pad[0x70];
    Func_824E1C30 func;
} Owner_824E1C30;

typedef struct {
    char pad[0xc];
    Owner_824E1C30 *owner;
} Self_824E1C30;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_824E1C30(Self_824E1C30 *self)
{
    Owner_824E1C30 *o = self->owner;
    if (o->func.impl != 0) {
        Func_824E1C30 *f = &o->func;
        if (f->impl == 0) {
            fn_82F63108();
        }
        f->impl->vt->call(f->impl, 0, (char *)self - 0xf0);
    }
}
