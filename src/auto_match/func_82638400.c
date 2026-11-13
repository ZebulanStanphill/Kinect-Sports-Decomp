typedef struct Device_82638400 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x2934 - 0x18];
    unsigned int bits;
} Device_82638400;

static __forceinline void orq_82638400(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638400(Device_82638400 *d, unsigned int v)
{
    d->bits = (d->bits & 0xfc7fffff) | ((v & 7) << 23);
    orq_82638400(&d->dirty10, 0x800);
    orq_82638400(&d->dirty10, 0x20000);
}
