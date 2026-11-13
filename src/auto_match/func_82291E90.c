typedef struct Var_82291E90 {
    int a;
    int b;
    union {
        double d;
        int i;
        const unsigned short *s;
    } u;
} Var_82291E90;
typedef struct Obj_82291E90 {
    int pad[3];
    void **movie;            /* 0x0c */
    int pad10[3];
    int strings;             /* 0x1c */
} Obj_82291E90;
extern double lbl_821954B0[];
extern void fn_82358FD8(int strings, unsigned short *buf, int size, const char *key);
extern void fn_82273CD8(Var_82291E90 *, int);
extern void fn_82273C88(Var_82291E90 *);
extern void fn_82672C20(void *, const char *, Var_82291E90 *, int);

void fn_82291E90(Obj_82291E90 *self, unsigned int n, unsigned int m)
{
    unsigned short postfix[0x20];
    void **movie;
    Var_82291E90 v[4];
    Var_82291E90 *p;
    int i;

    fn_82358FD8(self->strings, postfix, 0x20, "leaderboard_postfix_distance");
    movie = self->movie;
    for (i = 0; i < 4; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 3); v[0].u.d = lbl_821954B0[15];
    fn_82273CD8(&v[1], 3); v[1].u.d = (double)n;
    fn_82273CD8(&v[2], 3); v[2].u.d = (double)m;
    fn_82273CD8(&v[3], 5); v[3].u.s = postfix;
    fn_82672C20(*movie, "_root.mainCtrl.setDistance", v, 4);
    p = v + 4; i = 3; do { p--; fn_82273C88(p); } while (--i >= 0);
}
