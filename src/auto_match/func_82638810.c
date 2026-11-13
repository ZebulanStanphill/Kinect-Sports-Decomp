typedef struct Device_82638810 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x28dc - 0x18];
    unsigned int bits;
    char pad28e0[0x2f0c - 0x28e0];
    unsigned int value;
    char pad2f10[0x3150 - 0x2f10];
    int enabled;
} Device_82638810;

static __forceinline void orq_82638810(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638810(Device_82638810 *d, unsigned int v)
{
    d->value = v;
    d->bits = (d->bits & 0xfffff0ff) | (((d->enabled ? v : 0) & 0xf) << 8);
    orq_82638810(&d->dirty10, 0x2000000000ULL);
}
