typedef struct Iface_823666C0 Iface_823666C0;
typedef struct {
    int (*f0)(Iface_823666C0 *);
    int (*f4)(Iface_823666C0 *);
    int (*f8)(Iface_823666C0 *);
    int (*fC)(Iface_823666C0 *);
} IfaceVt_823666C0;
struct Iface_823666C0 { IfaceVt_823666C0 *vt; };
typedef struct {
    char pad0[0x210];
    int f210;
    char pad214[0x3ec - 0x214];
    Iface_823666C0 *f3ec;
    char pad3f0[0x798 - 0x3f0];
    char f798[4];
} Inner_823666C0;
typedef struct {
    int f0;
    Inner_823666C0 *inner;
} Self_823666C0;
extern void fn_822BE4C0(int a, int b, int c, void *d);

void fn_823666C0(Self_823666C0 *self, int arg)
{
    Inner_823666C0 *in = self->inner;
    fn_822BE4C0(arg, self->inner->f210, in->f3ec->vt->fC(in->f3ec), in->f798);
}
