typedef struct {
    char pad0[0x14];
    char sub[0x1c];
    unsigned int f30;
} Inner_827A2BA0;
typedef struct {
    char pad0[0x14];
    Inner_827A2BA0 *inner;
} Self_827A2BA0;

extern void *fn_8278FDC8(void *sub);

static __forceinline unsigned char HasData_827A2BA0(Self_827A2BA0 *s)
{
    return (int)s->inner != 0 && fn_8278FDC8(s->inner->sub) != 0;
}

unsigned int fn_827A2BA0(Self_827A2BA0 *s, unsigned int off)
{
    if (HasData_827A2BA0(s) && off > s->inner->f30) {
        return (unsigned int)fn_8278FDC8(s->inner->sub) + off;
    }
    return off;
}
