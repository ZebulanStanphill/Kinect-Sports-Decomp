typedef struct Iface_fn_82A41480 Iface_fn_82A41480;
typedef struct {
    void *s0, *s4;
    void (*f8)(Iface_fn_82A41480 *);
    void *sc, *s10;
    void (*f14)(Iface_fn_82A41480 *);
} VT_fn_82A41480;
struct Iface_fn_82A41480 {
    VT_fn_82A41480 *vt;
};
typedef struct {
    char pad[0x74];
    Iface_fn_82A41480 sub;
    char pad2[0x218 - 0x74 - 4];
    char data[4];
} Obj_fn_82A41480;

int fn_82A484F8(void *p, void *arg);

long fn_82A41480(Obj_fn_82A41480 *self, void *arg)
{
    Iface_fn_82A41480 *p = &self->sub;
    long hr;
    p->vt->f8(p);
    hr = fn_82A484F8(self->data, arg) ? 0 : 0x8007000E;
    p->vt->f14(p);
    return hr;
}
