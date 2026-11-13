typedef struct Iface_8248AA78 Iface_8248AA78;
typedef struct IfaceVt_8248AA78 {
    void (*f0)(Iface_8248AA78 *self);
} IfaceVt_8248AA78;
struct Iface_8248AA78 {
    IfaceVt_8248AA78 *vt;
};

typedef struct Obj_8248AA78 {
    int pad0;
    int f4;
    int f8;
    char padc[0x84 - 0xc];
    Iface_8248AA78 *a;    /* 0x84 */
    Iface_8248AA78 *b;    /* 0x88 */
} Obj_8248AA78;

extern int fn_8248BCC0(Obj_8248AA78 *self, float dt, int arg);

static __forceinline int IsBusy(Obj_8248AA78 *o)
{
    return o->f4 == 0 || o->f8 != 0;
}

int fn_8248AA78(Obj_8248AA78 *self, float dt, int arg)
{
    if (IsBusy(self))
        return 0;
    self->a->vt->f0(self->a);
    if (self->b != 0)
        self->b->vt->f0(self->b);
    return fn_8248BCC0(self, dt, arg);
}
