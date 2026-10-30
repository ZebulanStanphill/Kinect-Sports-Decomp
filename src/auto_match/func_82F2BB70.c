typedef struct Ctx_82F2BB70 {
    char pad[0x1ebc];
    unsigned int f1ebc;
    char pad2[0x4e50 - 0x1ec0];
    int f4e50;
    int f4e54;
    char pad3[0x6f98 - 0x4e58];
    int f6f98;
} Ctx_82F2BB70;
extern void fn_82F1B020(Ctx_82F2BB70 *c, short *a, short *b, unsigned int p5, int i, int one);
extern void fn_82F2A168(Ctx_82F2BB70 *c, unsigned int u, int a, int b);
extern void fn_82F2A338(Ctx_82F2BB70 *c, unsigned int u, int a, int b);
extern void fn_82F2A508(Ctx_82F2BB70 *c, unsigned int u, int a, int b);
extern void fn_82F2A6D8(Ctx_82F2BB70 *c, unsigned int u, int a, int b);
extern void fn_82F2AAD0(Ctx_82F2BB70 *c, unsigned int u, int a, int b, int k, unsigned int p5);

void fn_82F2BB70(Ctx_82F2BB70 *c, short *tab, short *cnt, int i, unsigned int p5)
{
    unsigned int u = c->f1ebc;
    short *p = tab + i * 128;
    short *n = cnt + i;
    short *q;
    int k;
    if (c->f6f98 != 0)
        fn_82F1B020(c, p, n, p5, i, 1);
    if (i < 4) {
        fn_82F2AAD0(c, u, *p, c->f4e50, 0x77, p5);
        if (*n > 2) {
            k = 2;
            q = p;
            if (*n - 2 > 2) {
                do {
                    fn_82F2A508(c, u, q[3], q[2]);
                    k += 2;
                    q += 2;
                } while (k < *n - 2);
            }
            fn_82F2A6D8(c, u, p[k + 1], p[k]);
        }
    } else {
        fn_82F2AAD0(c, u, *p, c->f4e54, 0x77, p5);
        if (*n > 2) {
            k = 2;
            q = p;
            if (*n - 2 > 2) {
                do {
                    fn_82F2A168(c, u, q[3], q[2]);
                    k += 2;
                    q += 2;
                } while (k < *n - 2);
            }
            fn_82F2A338(c, u, p[k + 1], p[k]);
        }
    }
}
