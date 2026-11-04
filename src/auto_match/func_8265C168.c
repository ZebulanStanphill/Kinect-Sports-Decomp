typedef struct Opt_8265C168 { int pad; unsigned int val; unsigned char has; } Opt_8265C168;
extern void fn_8265BAB8(Opt_8265C168 *, unsigned int);
extern void fn_82F641F8(unsigned int);

Opt_8265C168 *fn_8265C168(Opt_8265C168 *dst, Opt_8265C168 *src)
{
    if (dst != src) {
        if (dst->has != 0) {
            fn_82F641F8(dst->val);
        }
        dst->has = 0;
        dst->val = 0;
        if (src->has != 0) {
            fn_8265BAB8(dst, src->val);
        } else {
            dst->val = src->val;
        }
    }
    return dst;
}
