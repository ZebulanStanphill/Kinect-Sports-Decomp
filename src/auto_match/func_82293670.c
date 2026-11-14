typedef struct Var_82293670 {
    int a;
    int b;
    union {
        double d;
        int i;
        unsigned char b;
        const char *s;
        const unsigned short *ws;
    } u;
} Var_82293670;

typedef struct Ref_82293670 {
    void *p;
    void *rc;
} Ref_82293670;

extern void fn_82273CD8(Var_82293670 *, int);
extern void fn_82273C88(Var_82293670 *);
extern Ref_82293670 *fn_8229AE10(Ref_82293670 *, void *);
extern void fn_82672C20(void *, const char *, Var_82293670 *, int);
extern void fn_822315A0(void *);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern char lbl_821AA634[]; /* "-" */

void fn_82293670(void *self, int frame, int first, int second, int score, int strike, unsigned int mark)
{
    Var_82293670 v[5];
    unsigned short text[0x400];
    Ref_82293670 r;
    Var_82293670 *p;
    int i;

    for (i = 0; i < 5; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 3); v[0].u.d = (double)frame;
    fn_82273CD8(&v[1], 3); v[1].u.d = (double)first;
    fn_82273CD8(&v[2], 3); v[2].u.d = (double)second;
    fn_82273CD8(&v[4], 2); v[4].u.b = strike != 0;
    switch (mark) {
    case 0:
        if (score == 0) {
            fn_82273CD8(&v[3], 4); v[3].u.s = lbl_821AA634;
        } else {
            fn_82528EE0(text, 0x400, L"%d", score);
            fn_82273CD8(&v[3], 5); v[3].u.ws = text;
        }
        break;
    case 1:
        fn_82273CD8(&v[3], 4); v[3].u.s = "/";
        break;
    case 2:
        fn_82273CD8(&v[3], 4); v[3].u.s = "X";
        break;
    }
    fn_82672C20(fn_8229AE10(&r, self)->p, "_root.scorecardCtrl.setBowlScore", v, 5);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    p = v + 5; i = 4; do { p--; fn_82273C88(p); } while (--i >= 0);
}
