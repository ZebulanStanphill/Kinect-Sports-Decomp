typedef struct VObj VObj;
typedef struct VTbl {
    void *f[13];
    void (*f34)(VObj *self, void *a, int b);
} VTbl;
struct VObj {
    VTbl *vt;
};

typedef struct Sub {
    char pad0[0xa98];
    char ma98[0x68];
    unsigned int flags;
} Sub;

typedef struct Self {
    char pad0[0x68];
    VObj v68;
    char pad6c[0x34];
    Sub *sub;
    char pada4[4];
    char ma8[0xa0];
    char m148[0x6c];
    void *p1b4;
} Self;

extern void fn_826CE308(void *p);
extern void fn_8267BE38(void *p);
extern int fn_826C86D8(Self *p);
extern void fn_826D03A0(void *p, int i);
extern void fn_82699AD0(void *p);
extern void fn_8269D480(Self *p);

void fn_826D1430(Self *self)
{
    void *p;
    int idx;

    p = self->p1b4;
    if (p != 0) {
        fn_826CE308(p);
        fn_8267BE38(p);
    }
    self->p1b4 = 0;
    idx = fn_826C86D8(self);
    if (idx > -1) {
        fn_826D03A0(self->sub->ma98, idx);
    }
    self->sub->flags |= 0x400;
    fn_82699AD0(self->ma8);
    fn_8269D480(self);
    self->v68.vt->f34(&self->v68, self->m148, 0);
}
