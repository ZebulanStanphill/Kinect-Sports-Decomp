extern void fn_82F1B020(void *, short *, short *, void *, int, int);
extern int fn_82F1B2D8(void *, short *, short *, int);
extern void fn_82F2AAD0(void *, int, int, int, int, void *);
extern void fn_82F2A508(void *, int, int, int);
extern void fn_82F2A6D8(void *, int, int, int);
extern void fn_82F2A168(void *, int, int, int);
extern void fn_82F2A338(void *, int, int, int);

typedef struct {
    char pad0[0x1ebc];
    int h1ebc;
    char pad1[0x4e50 - 0x1ec0];
    int h4e50;
    int h4e54;
    char pad2[0x6f90 - 0x4e58];
    int flag6f90;
    int pad6f94;
    int flag6f98;
    char pad3[0x75f8 - 0x6f9c];
    int acc75f8;
} Ctx_82F2BD00;

void fn_82F2BD00(Ctx_82F2BD00 *c, void *p2, short *buf, short *cnt)
{
    int h;
    int k;
    int i;
    int *flags;
    short *q;

    h = c->h1ebc;
    flags = (int *)p2 + 1;
    k = 1;
    do {
        if (c->flag6f98 != 0) {
            fn_82F1B020(c, buf, cnt, p2, k - 1, 1);
        }
        if (c->flag6f90 != 0) {
            c->acc75f8 = fn_82F1B2D8(c, buf, cnt, k) + c->acc75f8;
        }
        fn_82F2AAD0(c, h, buf[0], c->h4e50, 0x77, p2);
        if (*flags++ == 1) {
            i = 2;
            q = buf;
            if (i < cnt[0] - 2) {
                do {
                    fn_82F2A508(c, h, q[3], q[2]);
                    i += 2;
                    q += 2;
                } while (i < cnt[0] - 2);
            }
            fn_82F2A6D8(c, h, buf[i + 1], buf[i]);
        }
        k++;
        buf += 0x80;
        cnt += 1;
    } while (k <= 4);
    if (c->flag6f98 != 0) {
        fn_82F1B020(c, buf, cnt, p2, 4, 1);
    }
    if (c->flag6f90 != 0) {
        c->acc75f8 = fn_82F1B2D8(c, buf, cnt, 4) + c->acc75f8;
    }
    fn_82F2AAD0(c, h, buf[0], c->h4e54, 0x77, p2);
    if (flags[0] == 1) {
        i = 2;
        q = buf;
        if (i < cnt[0] - 2) {
            do {
                fn_82F2A168(c, h, q[3], q[2]);
                i += 2;
                q += 2;
            } while (i < cnt[0] - 2);
        }
        fn_82F2A338(c, h, buf[i + 1], buf[i]);
    }
    buf += 0x80;
    cnt += 1;
    if (c->flag6f98 != 0) {
        fn_82F1B020(c, buf, cnt, p2, 5, 1);
    }
    if (c->flag6f90 != 0) {
        c->acc75f8 = fn_82F1B2D8(c, buf, cnt, 5) + c->acc75f8;
    }
    fn_82F2AAD0(c, h, buf[0], c->h4e54, 0x77, p2);
    if (flags[1] == 1) {
        i = 2;
        q = buf;
        if (i < cnt[0] - 2) {
            do {
                fn_82F2A168(c, h, q[3], q[2]);
                i += 2;
                q += 2;
            } while (i < cnt[0] - 2);
        }
        fn_82F2A338(c, h, buf[i + 1], buf[i]);
    }
}
