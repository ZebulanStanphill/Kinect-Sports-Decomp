typedef struct { unsigned char b[0x6000]; } Ctx_82C48268;

#define FI(o) (*(int *)((char *)p + (o)))
#define FF(o) (*(float *)((char *)p + (o)))
#define FS(o) (*(short *)((char *)p + (o)))
#define FP(o) (*(void **)((char *)p + (o)))

extern int fn_82C53BD0(Ctx_82C48268 *p, int b, int c, int d, int e, int f);
extern char lbl_820FCFF0[];
extern char lbl_820FD3F0[];

int fn_82C48268(Ctx_82C48268 *p, int a, int b, float f1, float f2,
                int c, int d, int e, int g)
{
    int r;

    FI(0xd30) = a;
    FI(0x5674) = 0;
    r = fn_82C53BD0(p, b, (int)f1, c, d, FI(0x50));
    if (r != 0) {
        return r;
    }
    FF(0xe78) = f1;
    FI(0xe70) = b;
    FF(0xe7c) = f2;
    FS(0xe9c) = 0;
    FI(0xe74) = e;
    if (e > 4) {
        FI(0xe74) = 4;
    } else if (e < -1) {
        FI(0xe74) = -1;
    }
    FI(0x3cd0) = g;
    if (g != 0 && g != 2) {
        FI(0x3cd0) = 0;
    }
    FI(0x58) = FI(0x9c);
    FI(0x60) = FI(0xcc);
    FI(0x5c) = FI(0xa0);
    FI(0x6c) = FI(0xd0);
    FI(0x68) = FI(0xd4);
    FI(0x74) = FI(0xd8);
    FI(0x64) = FI(0xcc) << 4;
    FI(0x70) = FI(0xd0) << 3;
    FI(0x78) = (FI(0x9c) == FI(0xcc) && FI(0xa0) == FI(0xd4)) ? 1 : 0;
    FI(0xda8) = 0;
    FI(0x80) = FI(0xb4) >> 4;
    FI(0x84) = FI(0xbc) >> 4;
    FI(0xdac) = 0;
    FI(0xdb0) = 0;
    FI(0x7c) = FI(0x84) * FI(0x80);
    FP(0x100) = lbl_820FCFF0 + 0x180;
    FP(0x104) = lbl_820FD3F0 + 0x28;
    return 0;
}
