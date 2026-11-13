typedef struct Obj_82312830 {
    char pad0[0x28];
    unsigned int f28;
    int f2c;
    char pad30[0x168 - 0x30];
    void *f168;
    int f16c;
} Obj_82312830;

typedef struct Mgr_82312830 {
    char pad0[0xde0];
    int fde0;
    unsigned int fde4;
} Mgr_82312830;

typedef struct Self_82312830 {
    char pad0[0xc];
    Obj_82312830 *obj;
    Mgr_82312830 *mgr;
} Self_82312830;

extern void fn_823CD840(Mgr_82312830 *m, unsigned int a, int b);
extern unsigned char fn_8288B760(void *p);

static __forceinline int getState_82312830(Obj_82312830 *o)
{
    int v;
    if (o->f168 != 0) {
        v = fn_8288B760(o->f168);
    } else {
        v = o->f16c;
    }
    return v;
}

void fn_82312830(Self_82312830 *self)
{
    if (self->obj->f28 == self->mgr->fde4 && self->obj->f2c == self->mgr->fde0) {
        if (getState_82312830(self->obj) != 0) {
            fn_823CD840(self->mgr, self->obj->f28, self->obj->f2c);
        }
    }
}
