typedef struct Device_82638368 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x2934 - 0x18];
    unsigned int bits;
} Device_82638368;

static __forceinline void orq_82638368(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638368(Device_82638368 *d, unsigned int v)
{
    d->bits = (d->bits & 0xfff1ffff) | ((v & 7) << 17);
    orq_82638368(&d->dirty10, 0x800);
    orq_82638368(&d->dirty10, 0x20000);
}
