typedef struct Iface_fn_82A4BDA8 Iface_fn_82A4BDA8;
typedef struct {
    void *s0, *s4;
    void (*f8)(Iface_fn_82A4BDA8 *);
    void *sc, *s10;
    void (*f14)(Iface_fn_82A4BDA8 *);
} VT_fn_82A4BDA8;
struct Iface_fn_82A4BDA8 {
    VT_fn_82A4BDA8 *vt;
};
typedef struct {
    char pad[0x54];
    Iface_fn_82A4BDA8 sub;
    char pad2[0x78 - 0x54 - 4];
    char data[4];
} Obj_fn_82A4BDA8;

int fn_82A5A960(void *p, void *arg);

long fn_82A4BDA8(Obj_fn_82A4BDA8 *self, void *arg)
{
    Iface_fn_82A4BDA8 *p = &self->sub;
    long hr;
    p->vt->f8(p);
    hr = fn_82A5A960(self->data, arg) ? 0 : 0x8007000E;
    p->vt->f14(p);
    return hr;
}
