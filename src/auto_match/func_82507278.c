typedef struct S_82507278 {
    __int64 a;
    __int64 b;
    __int64 c;
    int d;
} S_82507278;

typedef struct P_82507278 {
    char pad0[0xb6d];
    unsigned char fb6d;
    unsigned char fb6e;
    unsigned char fb6f[0xf58 - 0xb6f];
    S_82507278 s;              /* 0xf58 */
    char pad1[0xfec - 0xf78];
    int ffec;                  /* 0xfec */
    int ff0;
    int fff4;                  /* 0xff4 */
    unsigned char fff8;        /* 0xff8 */
    char pad2[3];
    float fffc;                /* 0xffc */
} P_82507278;

typedef struct B_82507278 {
    char pad0[0xd4];
    void *fd4;                 /* 0xd4 */
    char pad1[0x5bc - 0xd8];
    int mode;                  /* 0x5bc */
    int f5c0;                  /* 0x5c0 */
    char pad2[0x5d4 - 0x5c4];
    int f5d4;                  /* 0x5d4 */
    float f5d8;                /* 0x5d8 */
    int f5dc;                  /* 0x5dc */
} B_82507278;

extern char lbl_831C2240[];
extern char lbl_831C2628[];
extern char lbl_831C2A10[];

extern void fn_82507590(P_82507278 *p, char *msg);
extern void fn_828EB518(int v);
extern void fn_82A81B88(int a, int b, void *c, S_82507278 *d);

int fn_82507278(P_82507278 *p, B_82507278 *b)
{
    S_82507278 *s = &p->s;
    int v;

    s->a = 0;
    s->b = 0;
    s->c = 0;
    s->d = 0;
    p->fffc = b->f5d8;
    if (b->fd4 == 0) {
        switch (b->mode) {
        case 0:
            fn_82507590(p, lbl_831C2A10);
            break;
        case 2:
            fn_82507590(p, lbl_831C2628);
            break;
        case 3:
            v = b->f5dc;
            if (v >= 0 && (unsigned int)v != 0xff) {
                fn_828EB518(v);
            }
            /* fall through */
        case 4:
            fn_82A81B88(3, 1, p->fb6f, s);
            p->fb6e = 1;
            p->fb6d = 1;
            break;
        default:
            fn_82507590(p, lbl_831C2240);
            break;
        }
    }
    p->fff4 = b->mode;
    p->fff8 = b->f5d4 != 0;
    p->ffec = b->f5c0;
    return 1;
}
