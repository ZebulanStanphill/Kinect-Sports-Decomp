typedef struct {
    union { char buf[16]; char *ptr; } u;
    unsigned size;
    unsigned cap;
    int alloc;
} Str_83124870;

typedef struct {
    int mode;
    Str_83124870 s;
    void *f20;
    void *f24;
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
} G_83124870;

extern G_83124870 lbl_83295EE0;
extern void fn_82230110(Str_83124870 *, const char *);
extern void fn_82230218(Str_83124870 *, Str_83124870 *, unsigned, unsigned);
extern void fn_825162B8(void);
extern void fn_82238E90(void);
extern void fn_82516318(void);
extern void fn_82516380(void);
extern void fn_82516410(void);
extern void *fn_825154B8(void);
extern void fn_82515570(void *, G_83124870 *);
extern void fn_8265CA20(void *);
extern void fn_8313F130(void);
extern int atexit(void (*)(void));

void fn_83124870(void)
{
    Str_83124870 tmp;
    fn_82230110(&tmp, "GlobalBase");
    lbl_83295EE0.s.cap = 0xf;
    lbl_83295EE0.s.size = 0;
    lbl_83295EE0.s.u.buf[0] = 0;
    lbl_83295EE0.mode = 0;
    fn_82230218(&lbl_83295EE0.s, &tmp, 0, 0xffffffff);
    lbl_83295EE0.f20 = fn_825162B8;
    lbl_83295EE0.f24 = fn_82238E90;
    lbl_83295EE0.f28 = fn_82516318;
    lbl_83295EE0.f2c = fn_82516380;
    lbl_83295EE0.f30 = fn_82516410;
    lbl_83295EE0.f34 = 0;
    fn_82515570(fn_825154B8(), &lbl_83295EE0);
    if (tmp.cap >= 0x10) {
        fn_8265CA20(tmp.u.ptr);
    }
    tmp.size = 0;
    tmp.u.buf[0] = 0;
    tmp.cap = 0xf;
    atexit(fn_8313F130);
}
