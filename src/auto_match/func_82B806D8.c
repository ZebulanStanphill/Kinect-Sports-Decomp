typedef struct Owner_82B806D8 { char pad[0x38]; unsigned int *f38; } Owner_82B806D8;
typedef struct D1_82B806D8 { unsigned int w0; unsigned int pad : 15; unsigned int flag2 : 1; unsigned int rest : 16; } D1_82B806D8;

int fn_82B806D8(Owner_82B806D8 *o, unsigned int *s, unsigned int idx, unsigned int w, D1_82B806D8 *d, unsigned int *out)
{
    int f;
    unsigned int *dw = (unsigned int *)d;
    if (idx >= (s[1] >> 18 & 0x1f))
        return 0;
    if ((s[1] & 0x2000) != 0 && o->f38 != 0)
        o->f38[7] = 1;
    dw[1] = ((idx & 0xf) << 5) | (s[1] >> 23 & 0x1f) | (dw[1] & 0xfffffe00);
    dw[1] = (s[1] >> 4 & 0x2000) | (dw[1] & 0xffffdfff);
    f = ((s[1] & 0x1c000) == 0x4000) || ((s[1] & 0x1c000) == 0xc000);
d->w0 = w;
d->flag2 = f;

    *out = s[1] >> 14 & 7;
    return 1;
}
