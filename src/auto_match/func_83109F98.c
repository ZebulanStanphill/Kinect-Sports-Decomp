/* Static initialiser of the Bowling game-mode registration entry: copies the name string into the
   entry (inlined std::string copy, out-of-line assign fn_82230218), fills the callback table,
   registers the entry with the fn_825154B8 registry and destroys the temporary string. */
typedef struct {
    union { char buf[16]; char *ptr; } u;
    unsigned size;
    unsigned cap;
    int alloc;
} Str_83109F98;

typedef struct {
    int mode;
    Str_83109F98 s;
    void *f20;
    void *f24;
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
} G_83109F98;

extern G_83109F98 lbl_832837E0;
extern char lbl_831D0F64[];
extern void fn_82230110(Str_83109F98 *, const char *);
extern void fn_82230218(Str_83109F98 *, Str_83109F98 *, unsigned, unsigned);
extern void fn_82238E28(void);
extern void fn_82238E90(void);
extern void fn_82238EE8(void);
extern void fn_82238F80(void);
extern void fn_82516318(void);
extern void *fn_825154B8(void);
extern void fn_82515570(void *, G_83109F98 *);
extern void fn_8265CA20(void *);
extern void fn_8313B0D8(void);
extern int atexit(void (*)(void));

void fn_83109F98(void)
{
    Str_83109F98 tmp;
    fn_82230110(&tmp, "Bowling");
    lbl_832837E0.s.cap = 0xf;
    lbl_832837E0.s.size = 0;
    lbl_832837E0.s.u.buf[0] = 0;
    lbl_832837E0.mode = 7;
    fn_82230218(&lbl_832837E0.s, &tmp, 0, 0xffffffff);
    lbl_832837E0.f20 = fn_82238E28;
    lbl_832837E0.f24 = fn_82238E90;
    lbl_832837E0.f28 = fn_82516318;
    lbl_832837E0.f2c = fn_82238EE8;
    lbl_832837E0.f30 = fn_82238F80;
    lbl_832837E0.f34 = lbl_831D0F64;
    fn_82515570(fn_825154B8(), &lbl_832837E0);
    if (tmp.cap >= 0x10) {
        fn_8265CA20(tmp.u.ptr);
    }
    tmp.size = 0;
    tmp.u.buf[0] = 0;
    tmp.cap = 0xf;
    atexit(fn_8313B0D8);
}
