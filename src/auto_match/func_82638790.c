typedef struct Device_82638790 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x28dc - 0x18];
    unsigned int bits;
    char pad28e0[0x2f04 - 0x28e0];
    unsigned int value;
    char pad2f08[0x3148 - 0x2f08];
    int enabled;
} Device_82638790;

static __forceinline void orq_82638790(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638790(Device_82638790 *d, unsigned int v)
{
    unsigned int bits;

    d->value = v;
    bits = d->bits;
    d->bits = (bits & 0xfffffff0) | ((d->enabled ? v : 0) & 0xf);
    orq_82638790(&d->dirty10, 0x2000000000);
}
