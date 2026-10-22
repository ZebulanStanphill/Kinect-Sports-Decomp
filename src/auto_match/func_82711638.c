typedef struct {
    char pad0[8];
    int refcnt;
} RefObj;

typedef struct {
    char pad0[0x14c];
    RefObj *ref;
} Ctx;

typedef struct {
    void *vt0;
    char pad4[0xc];
    void *vt10;
    char pad14[0x30 - 0x14];
    RefObj *ref;
    void *vt34;
} Obj;

extern void fn_82711420(Obj *self);
extern void fn_826944C8(RefObj *r);
extern void fn_826BF638(void *a, Obj *b, Ctx **c, void *d, unsigned char *e);
extern char lbl_8200E898[];
extern char lbl_8200E89C[];
extern char lbl_8200E980[];
extern char lbl_831562C0[];

Obj *fn_82711638(Obj *self, Ctx **ctx)
{
    RefObj *r;
    RefObj *old;
    unsigned char flag;

    fn_82711420(self);
    self->vt0 = lbl_8200E89C;
    self->vt10 = lbl_8200E980;
    self->vt34 = lbl_8200E898;
    r = (*ctx)->ref;
    r->refcnt++;
    old = self->ref;
    if (--old->refcnt == 0) {
        fn_826944C8(old);
    }
    self->ref = r;
    flag = 1;
    fn_826BF638(&self->vt34, self, ctx, lbl_831562C0, &flag);
    return self;
}
