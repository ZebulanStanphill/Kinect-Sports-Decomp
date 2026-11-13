typedef struct S_82425110 {
    unsigned m0;
    unsigned m4;
    unsigned m8;
    int mc;
    int m10;
    int m14;
    int m18;
    int m1c;
    int m20;
    int m24;
    int m28;
    int m2c[9];
} S_82425110;
typedef struct P2_82425110 {
    char pad0[8];
    int m8;
} P2_82425110;

extern unsigned char fn_82415748(int);
extern int fn_82422D88(int, int, S_82425110 *);

char fn_82425110(int p1, P2_82425110 *p2, S_82425110 *s)
{
    char r;
    int i;
    int *q;
    int u;

    r = 8;
    if (s->m18 != 0) {
        r = 12;
    } else {
        if (s->m0 == s->m8) {
            r = 9;
        } else if (s->m4 == 0) {
            r = 10;
        } else if (s->m0 == 0) {
            if (s->m10 != 0) {
                r = 4;
            } else {
                r = ((s->m14 == 0) ^ 1) + 2;
            }
        } else if (fn_82415748(p2->m8) == 0) {
            r = 11;
        } else if (s->m4 == 2 && s->m2c[5] != 0 && s->m2c[8] != 0) {
            r = 7;
        } else {
            if (s->m28 == 0 && s->m4 != 1) {
                i = 1;
                q = s->m2c;
                do {
                    if (*q != 0) {
                        u = fn_82422D88(p1, i, s) == 0;
                        goto L;
                    }
                    i++;
                    q++;
                } while (i < 10);
            } else {
                u = 0;
L:
                if (u != 0) {
                    r = 6;
                }
            }
        }
    }
    return r;
}
