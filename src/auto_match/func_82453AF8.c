typedef struct Iface Iface;
typedef void (*VFn)(Iface *, int);
struct Iface {
    VFn *vtbl;
};

typedef struct Inner {
    char pad0[8];
    Iface *dev;
} Inner;

typedef struct Self {
    char pad0[0x3c];
    Inner *inner;
} Self;

extern void fn_822B1A68(Inner *inner);

void fn_82453AF8(Self *self)
{
    Iface *d;

    fn_822B1A68(self->inner);
    d = self->inner->dev;
    d->vtbl[5](d, 0xb);
    d = self->inner->dev;
    d->vtbl[5](d, 9);
    d = self->inner->dev;
    d->vtbl[5](d, 0xe);
}
