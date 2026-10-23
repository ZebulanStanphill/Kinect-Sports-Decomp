typedef void (*VFn)();
typedef struct Iface {
    VFn *vtbl;
} Iface;

typedef struct Inner {
    char pad0[0x2c];
    Iface lock;
} Inner;

typedef struct Self {
    char pad0[0x34];
    Inner *inner;
    char pad38[0x90 - 0x38];
    Iface *target;
} Self;

void fn_82A43920(Self *self, int arg)
{
    self->inner->lock.vtbl[2](&self->inner->lock);
    self->target->vtbl[3](self->target, 1, arg, 4);
    self->inner->lock.vtbl[5](&self->inner->lock);
}
