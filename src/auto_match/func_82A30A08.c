typedef struct Region_82A30A08 {
    char pad0[0x14];
    unsigned int size;
    char pad18[0x1d];
    unsigned char flags;
} Region_82A30A08;

extern int fn_82A30780(void *ctx, Region_82A30A08 *r);
extern int fn_82A30800(void *ctx, Region_82A30A08 *r);
extern int fn_82A30870(void *ctx, Region_82A30A08 *r, unsigned int size);
extern int fn_82A30910(void *ctx, Region_82A30A08 *r, unsigned int size);

int fn_82A30A08(void *ctx, Region_82A30A08 *r, unsigned int size, unsigned int noShrink)
{
    unsigned int aligned;
    int hr;

    if (size > 0xfffff000) {
        return 0xc000007f;
    }
    aligned = (size + 0xfff) & 0xfffff000;
    hr = 0;
    if (r->size != aligned) {
        if ((r->flags & 4) != 0 || (r->flags & 0x20) != 0 || (hr = fn_82A30780(ctx, r)) >= 0) {
            if (aligned == 0) {
                hr = fn_82A30800(ctx, r);
            } else if (r->size < aligned) {
                hr = fn_82A30910(ctx, r, aligned);
            } else if (noShrink == 0 && r->size > aligned) {
                hr = fn_82A30870(ctx, r, aligned);
            } else {
                hr = 0;
            }
        }
    }
    return hr;
}
