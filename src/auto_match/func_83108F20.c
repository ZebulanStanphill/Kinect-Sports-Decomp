/* Static initialiser of the Football game-mode registration entry: copies the name string into the
   entry (inlined std::string copy, out-of-line assign fn_82230218), fills the callback table,
   registers the entry with the fn_825154B8 registry and destroys the temporary string. */
typedef struct {
    union { char buf[16]; char *ptr; } u;
    unsigned size;
    unsigned cap;
    int alloc;
} Str_83108F20;

typedef struct {
    int mode;
    Str_83108F20 s;
    void *f20;
    void *f24;
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
} G_83108F20;

extern G_83108F20 lbl_83282FA8;
extern char lbl_831D0F44[];
extern void fn_82230110(Str_83108F20 *, const char *);
extern void fn_82230218(Str_83108F20 *, Str_83108F20 *, unsigned, unsigned);
extern void fn_82238E28(void);
extern void fn_82238E90(void);
extern void fn_82238EE8(void);
extern void fn_82238F80(void);
extern void fn_82516318(void);
extern void *fn_825154B8(void);
extern void fn_82515570(void *, G_83108F20 *);
extern void fn_8265CA20(void *);
extern void fn_8313AAC8(void);
extern int atexit(void (*)(void));

void fn_83108F20(void)
{
    Str_83108F20 tmp;
    fn_82230110(&tmp, "Football");
    lbl_83282FA8.s.cap = 0xf;
    lbl_83282FA8.s.size = 0;
    lbl_83282FA8.s.u.buf[0] = 0;
    lbl_83282FA8.mode = 5;
    fn_82230218(&lbl_83282FA8.s, &tmp, 0, 0xffffffff);
    lbl_83282FA8.f20 = fn_82238E28;
    lbl_83282FA8.f24 = fn_82238E90;
    lbl_83282FA8.f28 = fn_82516318;
    lbl_83282FA8.f2c = fn_82238EE8;
    lbl_83282FA8.f30 = fn_82238F80;
    lbl_83282FA8.f34 = lbl_831D0F44;
    fn_82515570(fn_825154B8(), &lbl_83282FA8);
    if (tmp.cap >= 0x10) {
        fn_8265CA20(tmp.u.ptr);
    }
    tmp.size = 0;
    tmp.u.buf[0] = 0;
    tmp.cap = 0xf;
    atexit(fn_8313AAC8);
}
