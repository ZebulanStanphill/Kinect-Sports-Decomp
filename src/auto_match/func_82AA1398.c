typedef struct Ctx_82AA1398 {
    unsigned int count;
    int unk4;
    int a;
    int b;
    int c;
    int d;
    int e;
} Ctx_82AA1398;

extern int fn_82AB14E0(unsigned char *buf, int pos, int n);
extern int fn_82AA0958(unsigned int *data, unsigned int size, void *callback, void *ctx, int a, int b);
extern void fn_82AA1210(void);

#define SWAP(x) (((x) >> 24) | (((x) >> 8) & 0xff00) | (((x) << 8) & 0xff0000) | ((x) << 24))

int fn_82AA1398(unsigned int *data, unsigned int size, int a, int b, int c, int d, int e)
{
    unsigned int *end;
    unsigned int *p;
    unsigned int tok[3];
    Ctx_82AA1398 ctx;
    int n;
    unsigned int count;

    end = (unsigned int *)((unsigned char *)data + size);
    for (p = data; p < end; p += 3) {
        unsigned int w0 = p[0];
        unsigned int w1 = p[1];
        unsigned int w2 = p[2];
        tok[0] = SWAP(w0);
        tok[1] = SWAP(w1);
        tok[2] = SWAP(w2);
        n = fn_82AB14E0((unsigned char *)tok, 0x2d, 4);
        if (n > 0 && n <= 2) {
            count = fn_82AB14E0((unsigned char *)tok, 1, 12);
            goto run;
        }
        n = fn_82AB14E0((unsigned char *)tok + 6, 0x2d, 4);
        if (n > 0 && n <= 2) {
            count = fn_82AB14E0((unsigned char *)tok + 6, 1, 12);
            goto run;
        }
    }
    count = size / 12;
run:
    ctx.count = count;
    ctx.unk4 = 0;
    ctx.b = b;
    ctx.c = c;
    ctx.d = d;
    ctx.a = a;
    ctx.e = e;
    return fn_82AA0958(data, size, (void *)fn_82AA1210, &ctx, 1, 1);
}
