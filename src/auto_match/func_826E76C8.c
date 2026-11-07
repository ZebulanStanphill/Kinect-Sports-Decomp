typedef struct Obj_826E76C8 Obj_826E76C8;

typedef struct Vt_826E76C8 {
    void *f0;
    int (*f4)(Obj_826E76C8 *);
    void *f8;
    void *fc;
    int (*f10)(Obj_826E76C8 *);
} Vt_826E76C8;

struct Obj_826E76C8 {
    Vt_826E76C8 *vt;
};

typedef struct Src_826E76C8 {
    int f0;
    int f4;
    int f8;
    int fc;
} Src_826E76C8;

typedef struct Self_826E76C8 {
    int f0;
    int f4;
    Src_826E76C8 *f8;
    int fc;
    Obj_826E76C8 *f10;
    unsigned char f14;
    unsigned char f15;
    unsigned char pad16[2];
    unsigned char sub18[8];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    unsigned char f38;
} Self_826E76C8;

extern void fn_8267C4C8(Obj_826E76C8 *p);
extern void fn_8267C4F0(Obj_826E76C8 *p);
extern void fn_8268B8E8(void *p, int v);
extern void fn_8268BEA8(void *p);

void fn_826E76C8(Self_826E76C8 *self, Obj_826E76C8 *obj, int a3, Src_826E76C8 *src)
{
    if (obj != 0) {
        fn_8267C4C8(obj);
    }
    if (self->f10 != 0) {
        fn_8267C4F0(self->f10);
    }
    self->f10 = obj;
    self->f4 = a3;
    self->f8 = src;
    self->fc = src ? src->fc : 0;
    self->f14 = 0;
    self->f15 = 0;
    if (obj != 0) {
        fn_8268B8E8(self->sub18, obj->vt->f4(obj));
    } else {
        fn_8268BEA8(self->sub18);
    }
    self->f28 = 0;
    self->f20 = 0;
    self->f24 = 0;
    self->f2c = 0;
    self->f30 = 0;
    self->f38 = 0;
    self->f34 = obj ? obj->vt->f10(obj) : 0;
}
