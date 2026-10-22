typedef struct {
    int refcnt;
} RefObj;

typedef struct {
    int f0;
    int f4;
    int f8;
    char fC[4];
    int f10;
    RefObj *ref;
    unsigned char b18;
    char pad19[0x40 - 0x19];
    int f40;
    char pad44[0x78 - 0x44];
    unsigned char b78;
} Obj;

extern void fn_8267BE38(RefObj *r);
extern void fn_8268BA10(void *p, int v);
extern void fn_8269A608(RefObj *r);

void fn_826FC250(Obj *self, int a, RefObj *ref, int d, int e, int f, unsigned char g)
{
    RefObj *old;

    self->f4 = a;
    if (ref != 0) {
        ref->refcnt++;
    }
    old = self->ref;
    if (old != 0) {
        if (--old->refcnt <= 0) {
            fn_8269A608(old);
            fn_8267BE38(old);
        }
    }
    self->ref = ref;
    self->f8 = f;
    self->f10 = d;
    self->f0 = 0;
    fn_8268BA10(self->fC, e);
    self->b18 = g;
    self->f40 = -1;
    self->b78 = 0;
}
