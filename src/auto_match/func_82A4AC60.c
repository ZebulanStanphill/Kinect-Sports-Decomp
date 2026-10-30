typedef struct Iface_82A4AC60 Iface_82A4AC60;
typedef struct {
    void *s0, *s1;
    void (*f8)(Iface_82A4AC60 *);
    void *sc, *s10;
    void (*f14)(Iface_82A4AC60 *);
} VT_82A4AC60;
struct Iface_82A4AC60 {
    VT_82A4AC60 *vt;
};
typedef struct {
    char pad[0x1c];
    Iface_82A4AC60 sub;
    char pad2[0x17c - 0x20];
    int state;
} Obj_82A4AC60;

int fn_82A4AC60(Obj_82A4AC60 *self, int *out)
{
    Iface_82A4AC60 *p = &self->sub;
    p->vt->f8(p);
    *out = 0;
    if (self->state == 2) {
        *out = 1;
    }
    p->vt->f14(p);
    return 0;
}
