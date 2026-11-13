/* Static initialiser of the OlympusMain game-mode registration entry: copies the name string into the
   entry (inlined std::string copy, out-of-line assign fn_82230218), fills the callback table,
   registers the entry with the fn_825154B8 registry and destroys the temporary string. */
typedef struct {
    union { char buf[16]; char *ptr; } u;
    unsigned size;
    unsigned cap;
    int alloc;
} Str_831086F0;

typedef struct {
    int mode;
    Str_831086F0 s;
    void *f20;
    void *f24;
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
} G_831086F0;

extern G_831086F0 lbl_83282CB0;
extern void *lbl_831D0E30[];
extern void fn_82230110(Str_831086F0 *, const char *);
extern void fn_82230218(Str_831086F0 *, Str_831086F0 *, unsigned, unsigned);
extern void fn_82238E28(void);
extern void fn_82238E90(void);
extern void fn_82238EE8(void);
extern void fn_82246230(void);
extern void fn_82516318(void);
extern void *fn_825154B8(void);
extern void fn_82515570(void *, G_831086F0 *);
extern void fn_8265CA20(void *);
extern void fn_8313A7F0(void);
extern int atexit(void (*)(void));

void fn_831086F0(void)
{
    Str_831086F0 tmp;
    void *v;
    fn_82230110(&tmp, "OlympusMain");
    lbl_83282CB0.s.cap = 0xf;
    lbl_83282CB0.s.size = 0;
    lbl_83282CB0.s.u.buf[0] = 0;
    lbl_83282CB0.mode = 1;
    v = lbl_831D0E30[1];
    fn_82230218(&lbl_83282CB0.s, &tmp, 0, 0xffffffff);
    lbl_83282CB0.f20 = fn_82238E28;
    lbl_83282CB0.f24 = fn_82238E90;
    lbl_83282CB0.f28 = fn_82516318;
    lbl_83282CB0.f2c = fn_82238EE8;
    lbl_83282CB0.f30 = fn_82246230;
    lbl_83282CB0.f34 = v;
    fn_82515570(fn_825154B8(), &lbl_83282CB0);
    if (tmp.cap >= 0x10) {
        fn_8265CA20(tmp.u.ptr);
    }
    tmp.size = 0;
    tmp.u.buf[0] = 0;
    tmp.cap = 0xf;
    atexit(fn_8313A7F0);
}
