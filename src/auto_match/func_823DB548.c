typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Ref_823DB548 {
    void *obj; /* 0x00 */
    void *rep; /* 0x04 */
} Ref_823DB548;

typedef struct Movie_823DB548 {
    char pad0[0x34];
    int loaded;  /* 0x34 */
    int hidden;  /* 0x38 */
    void *movie; /* 0x3c */
} Movie_823DB548;

typedef struct Panel_823DB548 {
    char pad0[0x10];
    __vector4 a;        /* 0x10 */
    __vector4 b;        /* 0x20 */
    int mode;           /* 0x30 */
    float progress;     /* 0x34 */
    float weight;       /* 0x38 */
    float startZ;       /* 0x3c */
    float x;            /* 0x40 */
    float y;            /* 0x44 */
    float z;            /* 0x48 */
    void *obj;          /* 0x4c */
    void *rep;          /* 0x50 */
    Movie_823DB548 *ui; /* 0x54 */
} Panel_823DB548;

extern void fn_822315A0(void *rep);
extern unsigned char fn_8223AAC0(void *rep);
extern void fn_82672C20(void *movie, const char *path, int arg2, int arg3);

static __forceinline __vector4 Replicate(float s)
{
    return __vspltw(__lvlx(&s, 0), 0);
}

void fn_823DB548(Panel_823DB548 *self, Ref_823DB548 *ref, __vector4 a, __vector4 b, float x, float y, float z)
{
    void *obj;
    void *rep;
    void *newObj;
    void *newRep;
    void *old;
    int mode;

    mode = x <= 0.0f && y + z > 0.0f;
    if (self->mode != 0 && mode == 0) {
        Movie_823DB548 *ui = self->ui;

        if (ui->loaded != 0 && ui->hidden == 0) {
            ui->hidden = 1;
            fn_82672C20(ui->movie, "_root.mainCtrl.hide", 0, 0);
        }
    }
    self->mode = mode;
    self->a = a;
    self->b = __vmulfp(b, Replicate(0.7071f));
    self->progress = 0.0f;
    self->weight = 1.0f;
    self->startZ = z;
    self->x = x;
    self->y = y;
    self->z = z;
    rep = ref->rep;
    obj = ref->obj;
    newObj = 0;
    newRep = 0;
    if (rep != 0 && fn_8223AAC0(rep) != 0) {
        newRep = rep;
        newObj = obj;
    }
    old = self->rep;
    self->rep = newRep;
    self->obj = newObj;
    if (old != 0) {
        fn_822315A0(old);
    }
}
