typedef struct Device_82638330 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x2934 - 0x18];
    unsigned int bits;
} Device_82638330;

static __forceinline void orq_82638330(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638330(Device_82638330 *d, unsigned int v)
{
    d->bits = (d->bits & 0xffffc7ff) | ((v & 7) << 11);
    orq_82638330(&d->dirty10, 0x800);
    orq_82638330(&d->dirty10, 0x20000);
}
