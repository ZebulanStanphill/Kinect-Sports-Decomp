/* Static initialiser of the Athletics game-mode registration entry: copies the name string into the
   entry (inlined std::string copy, out-of-line assign fn_82230218), fills the callback table,
   registers the entry with the fn_825154B8 registry and destroys the temporary string. */
typedef struct {
    union { char buf[16]; char *ptr; } u;
    unsigned size;
    unsigned cap;
    int alloc;
} Str_8310A6A8;

typedef struct {
    int mode;
    Str_8310A6A8 s;
    void *f20;
    void *f24;
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
} G_8310A6A8;

extern G_8310A6A8 lbl_83283AE4;
extern char lbl_831D0F74[];
extern void fn_82230110(Str_8310A6A8 *, const char *);
extern void fn_82230218(Str_8310A6A8 *, Str_8310A6A8 *, unsigned, unsigned);
extern void fn_82238E28(void);
extern void fn_82238E90(void);
extern void fn_82238EE8(void);
extern void fn_82238F80(void);
extern void fn_82516318(void);
extern void *fn_825154B8(void);
extern void fn_82515570(void *, G_8310A6A8 *);
extern void fn_8265CA20(void *);
extern void fn_8313B350(void);
extern int atexit(void (*)(void));

void fn_8310A6A8(void)
{
    Str_8310A6A8 tmp;
    fn_82230110(&tmp, "Athletics");
    lbl_83283AE4.s.cap = 0xf;
    lbl_83283AE4.s.size = 0;
    lbl_83283AE4.s.u.buf[0] = 0;
    lbl_83283AE4.mode = 3;
    fn_82230218(&lbl_83283AE4.s, &tmp, 0, 0xffffffff);
    lbl_83283AE4.f20 = fn_82238E28;
    lbl_83283AE4.f24 = fn_82238E90;
    lbl_83283AE4.f28 = fn_82516318;
    lbl_83283AE4.f2c = fn_82238EE8;
    lbl_83283AE4.f30 = fn_82238F80;
    lbl_83283AE4.f34 = lbl_831D0F74;
    fn_82515570(fn_825154B8(), &lbl_83283AE4);
    if (tmp.cap >= 0x10) {
        fn_8265CA20(tmp.u.ptr);
    }
    tmp.size = 0;
    tmp.u.buf[0] = 0;
    tmp.cap = 0xf;
    atexit(fn_8313B350);
}
