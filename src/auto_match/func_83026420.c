typedef struct Obj_83026420 Obj_83026420;

typedef struct ObjVt_83026420 {
    void *f0;
    void *f4;
    int (*f8)(Obj_83026420 *self);
    void (*fC)(Obj_83026420 *self, void *out);
    void *f10;
    int (*f14)(Obj_83026420 *self, void *iid, void *pp, int a, void *b);
} ObjVt_83026420;

struct Obj_83026420 {
    ObjVt_83026420 *vt;
};

typedef struct Self_83026420 {
    int f0;
    int f4;
    int f8;
    Obj_83026420 *fC;
    void *f10;
    unsigned char f14;
    unsigned char f15;
    unsigned char f16;
    unsigned char pad17;
    unsigned int f18;
    int f1C;
    int f20;
} Self_83026420;

typedef struct Arg5_83026420 {
    int f0;
    unsigned int f4;
} Arg5_83026420;

extern char lbl_831BC7FC[];
extern void *lbl_831BC770;
extern int fn_830137C8(void *iid, int a, Obj_83026420 **out);
extern void *fn_82FA5060(void *heap, int size);
extern void *fn_8303B348(void *mem, int a, int b);

int fn_83026420(Self_83026420 *self, int *p2, int p3, int p4, Arg5_83026420 *p5)
{
    int r;
    void *p;
    void *mem;
    unsigned char buf[8];

    self->f8 = p4;
    self->fC = 0;
    self->f10 = 0;
    self->f14 = 0;
    self->f20 = 0;
    self->f15 = 0;
    self->f16 = 0;
    self->f18 = p5->f4 >> 14;
    self->f1C = p3;
    r = fn_830137C8(lbl_831BC7FC, p2[0], &self->fC);
    if (r != 1) {
        return r;
    }
    self->fC->vt->fC(self->fC, buf);
    if (buf[5] == 0) {
        mem = fn_82FA5060(lbl_831BC770, 0x10);
        p = mem ? fn_8303B348(mem, p4, p3) : 0;
        self->f10 = p;
        if (p != 0) {
            r = self->fC->vt->f14(self->fC, lbl_831BC7FC, (char *)p + 4, p2[1], p5);
            if (r != 1) {
                return r;
            }
            return self->fC->vt->f8(self->fC);
        }
    }
    return 2;
}
