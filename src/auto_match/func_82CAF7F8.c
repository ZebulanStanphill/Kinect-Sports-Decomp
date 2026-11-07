typedef unsigned int undefined4;

int __cdecl abs(int);

typedef struct Ctx_82CAF7F8 {
    char pad[0x794];
    int bias;
} Ctx_82CAF7F8;

short *fn_82CAF7F8(Ctx_82CAF7F8 *ctx, short **tab, int a, int b, int c,
                   undefined4 *out)
{
    short *p = tab[a];
    short *q = tab[b + 2];
    short v = *tab[c + 4];
    int d1 = abs(v - *p);
    int d2 = abs(v - *q);

    if (d2 < d1 + ctx->bias) {
        *out = 0;
        return p;
    }
    *out = 1;
    return q;
}
