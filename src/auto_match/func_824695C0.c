// Formats the red and blue scores as wide strings and passes them to the Flash movie
// (_root.SetScoreRed / _root.SetScoreBlue).
typedef struct Var_824695C0 {
    int a;
    int b;
    union {
        double d;
        const unsigned short *ws;
    } u;
} Var_824695C0;
extern void fn_82273CD8(Var_824695C0 *, int);
extern void fn_82273C88(Var_824695C0 *);
extern void fn_82672C20(void *, const char *, Var_824695C0 *, int);
extern int fn_82528EE0(unsigned short *buf, unsigned int count, const unsigned short *fmt, ...);

typedef struct Hud_824695C0 {
    int unk0;
    void *movie;
} Hud_824695C0;

void fn_824695C0(Hud_824695C0 *self, int red, int blue)
{
    unsigned short redText[32] = L"";
    unsigned short blueText[32] = L"";
    Var_824695C0 v[2];
    Var_824695C0 *p;
    int i;

    fn_82528EE0(redText, 0x20, L"%d", red);
    fn_82528EE0(blueText, 0x20, L"%d", blue);
    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 5); v[0].u.ws = redText;
    fn_82273CD8(&v[1], 5); v[1].u.ws = blueText;
    fn_82672C20(self->movie, "_root.SetScoreRed", &v[0], 1);
    fn_82672C20(self->movie, "_root.SetScoreBlue", &v[1], 1);
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
