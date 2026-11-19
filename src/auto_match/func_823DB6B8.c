typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Ref_823DB6B8 {
    void *obj; /* 0x00 */
    void *rep; /* 0x04 */
} Ref_823DB6B8;

typedef struct Movie_823DB6B8 {
    char pad0[0x34];
    int loaded;  /* 0x34 */
    int hidden;  /* 0x38 */
    void *movie; /* 0x3c */
} Movie_823DB6B8;

typedef struct Panel_823DB6B8 {
    char pad0[0x60];
    __vector4 a; /* 0x60 */
    __vector4 b; /* 0x70 */
    int mode;    /* 0x80 */
    float x;     /* 0x84 */
    float y;     /* 0x88 */
    char pad8c[0x10];
    void *obj;          /* 0x9c */
    void *rep;          /* 0xa0 */
    Movie_823DB6B8 *ui; /* 0xa4 */
} Panel_823DB6B8;

extern void fn_822315A0(void *rep);
extern unsigned char fn_8223AAC0(void *rep);
extern void fn_82672C20(void *movie, const char *path, int arg2, int arg3);

void fn_823DB6B8(Panel_823DB6B8 *self, Ref_823DB6B8 *ref, int mode, __vector4 a, __vector4 b, float x,
                 float y)
{
    void *obj;
    void *rep;
    void *newObj;
    void *newRep;
    void *old;

    if (self->mode != 0 && mode == 0) {
        Movie_823DB6B8 *ui = self->ui;

        if (ui->loaded != 0 && ui->hidden == 0) {
            ui->hidden = 1;
            fn_82672C20(ui->movie, "_root.mainCtrl.hide", 0, 0);
        }
    }
    self->x = x;
    self->y = y;
    self->mode = mode;
    self->a = a;
    self->b = b;
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
