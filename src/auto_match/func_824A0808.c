typedef struct Var_824A0808 {
    int a;
    int b;
    union {
        double d;
        void *p;
    } u;
} Var_824A0808;

typedef struct Obj_824A0808 {
    char pad[0x50];
    void *movie;
    int pad54;
    void *strings;
} Obj_824A0808;

extern void fn_82273CD8(Var_824A0808 *, int);
extern void fn_82273C88(Var_824A0808 *);
extern int fn_82528BF8(void *table, const char *key, unsigned short *buf, int size, int a, int b);
extern void fn_82672C20(void *, const char *, Var_824A0808 *, int);
extern const char *lbl_831E5F54[5];

void fn_824A0808(Obj_824A0808 *self)
{
    Var_824A0808 v[2];
    unsigned short text[0x20];
    Var_824A0808 *p;
    int i;

    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    for (i = 1; i < 5; i++) {
        fn_82528BF8(self->strings, lbl_831E5F54[i], text, 0x20, 0, 0);
        fn_82273CD8(&v[0], 3);
        v[0].u.d = (double)i;
        fn_82273CD8(&v[1], 5);
        v[1].u.p = text;
        fn_82672C20(self->movie, "_root.SetText", v, 2);
    }
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
