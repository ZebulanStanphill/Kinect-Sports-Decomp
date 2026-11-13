typedef struct Device_82638850 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x28dc - 0x18];
    unsigned int bits;
    char pad28e0[0x2f10 - 0x28e0];
    unsigned int value;
    char pad2f14[0x3154 - 0x2f14];
    int enabled;
} Device_82638850;

static __forceinline void orq_82638850(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638850(Device_82638850 *d, unsigned int v)
{
    d->value = v;
    d->bits = (d->bits & 0xffff0fff) | (((d->enabled ? v : 0) & 0xf) << 12);
    orq_82638850(&d->dirty10, 0x2000000000ULL);
}
