typedef void (*VFn)();
typedef struct Iface {
    VFn *vtbl;
} Iface;

typedef struct Inner {
    char pad0[0x2c];
    Iface lock;
} Inner;

typedef struct Self {
    char pad0[0x30];
    Inner *inner;
    char pad34[0x84 - 0x34];
    Iface *target;
} Self;

void fn_82A50458(Self *self, int arg)
{
    self->inner->lock.vtbl[2](&self->inner->lock);
    self->target->vtbl[3](self->target, 0, arg, 0xc);
    self->inner->lock.vtbl[5](&self->inner->lock);
}
