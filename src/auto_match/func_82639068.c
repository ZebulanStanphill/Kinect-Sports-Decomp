typedef struct Device_82639068 {
    char pad0[0x20];
    unsigned __int64 dirty;
    char pad1[0x29c0 - 0x20 - 8];
    unsigned int bits;
} Device_82639068;

static __forceinline void orq_82639068(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82639068(Device_82639068 *d, unsigned int v)
{
    d->bits = (d->bits & 0xfffffffe) | ((v & 1) << 0);
    orq_82639068(&d->dirty, 0x800000000ULL);
}
