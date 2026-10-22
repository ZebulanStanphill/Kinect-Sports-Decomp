extern void fn_8267C4F0(void *p);
extern char lbl_8200BD80[];
extern char lbl_8200C4C4[];
extern char lbl_8200C508[];
extern char lbl_8200C518[];

typedef struct Iface Iface;
typedef struct {
    void *f0;
    void *f4;
    void (*f8)(Iface *self, void *arg);
} IfaceVt;
struct Iface {
    IfaceVt *vt;
};

typedef struct {
    char pad0[0x74];
    int n74;
    char pad78[4];
    unsigned char b7C;
} Sub20;

typedef struct {
    void *vt0;
    char pad4[0xc];
    void *vt10;
    Iface *p14;
    void *p18;
    char pad1C[4];
    Sub20 *p20;
} Obj;

void fn_826D6A70(Obj *self)
{
    void *p;
    Iface *i;
    self->vt0 = lbl_8200C518;
    self->vt10 = lbl_8200C508;
    if (self->p20->n74 <= 1) {
        self->p20->b7C = 1;
    }
    if ((p = self->p20) != 0) {
        fn_8267C4F0(p);
    }
    if ((i = self->p14) != 0) {
        i->vt->f8(i, self->p18);
    }
    self->vt10 = lbl_8200C4C4;
    self->vt0 = lbl_8200BD80;
}
