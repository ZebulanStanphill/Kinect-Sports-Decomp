typedef struct WString_822985B0 {
    union {
        unsigned short text[8];
        unsigned short *ptr;
    } buf; /* 0x00 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
} WString_822985B0;

typedef struct Var_822985B0 {
    int a; /* 0x00 */
    int b; /* 0x04 */

    union {
        double d;
        const unsigned short *s;
    } u; /* 0x08 */
} Var_822985B0;

typedef struct Popup_822985B0 {
    char pad000[0x41c];
    void *vt; /* 0x41c */
    char pad420[0x14];
} Popup_822985B0;

typedef struct Hud_822985B0 {
    int movie; /* 0x00 */
    int pad04;
    char names[0x5c - 0x08]; /* 0x08 */
    int usePopup;            /* 0x5c */
    Popup_822985B0 *popup;   /* 0x60 */
    WString_822985B0 title;  /* 0x64 */
} Hud_822985B0;

extern unsigned short lbl_820E975C;
extern char lbl_821A8C90[];
extern WString_822985B0 *fn_82299140(void *names, const int *state);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void *fn_8265C9E0(int size);
extern void fn_82298FE8(void);
extern void fn_8229DCA8(void *, void *, void *, void *, void *, void (*)(void), void *, int, int);
extern void fn_8229E360(Popup_822985B0 *popup, const unsigned short *title, const unsigned short *text);
extern void fn_8229E090(Popup_822985B0 *popup, int a, int b);
extern void fn_82273CD8(Var_822985B0 *var, int type);
extern void fn_82273C88(Var_822985B0 *var);
extern void fn_82672C20(int movie, const char *path, Var_822985B0 *args, int count);

static __forceinline const unsigned short *CStr(WString_822985B0 *s)
{
    return s->capacity >= 8 ? s->buf.ptr : s->buf.text;
}

void fn_822985B0(Hud_822985B0 *self, int state, float value)
{
    unsigned short text[0x80];
    Var_822985B0 arg;
    Popup_822985B0 *popup;

    if (state == 11 && value > 0.0f) {
        fn_82528EE0(text, 0x80, L"%ls %.0f", CStr(fn_82299140(self->names, &state)),
                    (float)__fcfid(__fctid(value + 0.49999999)));
    } else {
        fn_82528EE0(text, 0x80, L"%ls", CStr(fn_82299140(self->names, &state)));
    }
    if (self->usePopup != 0) {
        if (state != 0) {
            if (self->popup == 0) {
                popup = (Popup_822985B0 *)fn_8265C9E0(0x434);
                if (popup != 0) {
                    popup->vt = lbl_821A8C90;
                    fn_8229DCA8(popup, &lbl_820E975C, &lbl_820E975C, &lbl_820E975C, &lbl_820E975C,
                                fn_82298FE8, self, 1, 2);
                } else {
                    popup = 0;
                }
                self->popup = popup;
            }
            fn_8229E360(self->popup, CStr(&self->title), text);
        } else if (self->popup != 0) {
            fn_8229E090(self->popup, 0, 1);
            self->popup = 0;
        }
    } else if (self->movie != 0) {
        arg.a = 0;
        arg.b = 0;
        fn_82273CD8(&arg, 5);
        arg.u.s = text;
        fn_82672C20(self->movie, "_root.SetStateString", &arg, 1);
        fn_82273C88(&arg);
    }
}
