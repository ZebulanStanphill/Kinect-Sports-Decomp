typedef struct Device_82638100 {
    char pad0[0x20];
    unsigned __int64 dirty;
    char pad1[0x29b8 - 0x20 - 8];
    unsigned int bits;
} Device_82638100;

static __forceinline void orq_82638100(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638100(Device_82638100 *d, unsigned int v)
{
    d->bits = (d->bits & 0xfffffbff) | ((v & 1) << 10);
    orq_82638100(&d->dirty, 0x2000000000ULL);
}
