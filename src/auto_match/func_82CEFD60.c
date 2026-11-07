typedef struct Obj_82CEFD60 Obj_82CEFD60;

typedef struct Vtbl_82CEFD60 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*getData)(Obj_82CEFD60 *self, void *out);    /* 0x0c */
    void *slot4;
    void (*begin)(Obj_82CEFD60 *self);                 /* 0x14 */
    void *slot6;
    void *slot7;
    Obj_82CEFD60 *(*next)(Obj_82CEFD60 *self);         /* 0x20 */
} Vtbl_82CEFD60;

struct Obj_82CEFD60 {
    Vtbl_82CEFD60 *vt;
};

extern void fn_82CE5040(int a, void *buf, int c);

void fn_82CEFD60(Obj_82CEFD60 *self, int ctx)
{
    unsigned char buf[72];
    Obj_82CEFD60 *p;

    self->vt->begin(self);
    p = self->vt->next(self);
    while (p != 0) {
        p->vt->getData(p, buf);
        fn_82CE5040(ctx, buf, ctx);
        p = p->vt->next(p);
    }
}
