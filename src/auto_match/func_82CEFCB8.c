typedef struct Obj_82CEFCB8 Obj_82CEFCB8;

typedef struct Vtbl_82CEFCB8 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*getData)(Obj_82CEFCB8 *self, void *out);    /* 0x0c */
    void *slot4;
    void *slot5;
    void *slot6;
    void *slot7;
    Obj_82CEFCB8 *(*parent)(Obj_82CEFCB8 *self);       /* 0x20 */
} Vtbl_82CEFCB8;

struct Obj_82CEFCB8 {
    Vtbl_82CEFCB8 *vt;
};

extern void fn_82CE6768(void *out, void *a, void *b);

void fn_82CEFCB8(Obj_82CEFCB8 *self, void *out)
{
    unsigned char local[64];
    unsigned char world[64];

    if (self->vt->parent(self) != 0) {
        fn_82CEFCB8(self->vt->parent(self), world);
        self->vt->getData(self, local);
        fn_82CE6768(out, world, local);
    } else {
        self->vt->getData(self, out);
    }
}
