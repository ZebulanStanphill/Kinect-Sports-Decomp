typedef struct Device_82639030 {
    char pad0[0x18];
    unsigned __int64 dirty;
    char pad1[0x2978 - 0x18 - 8];
    unsigned int bits;
} Device_82639030;

static __forceinline void orq_82639030(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82639030(Device_82639030 *d, unsigned int v)
{
    d->bits = (d->bits & 0xfffffffc) | ((v & 3) << 0);
    orq_82639030(&d->dirty, 0x2000000000000ULL);
}
