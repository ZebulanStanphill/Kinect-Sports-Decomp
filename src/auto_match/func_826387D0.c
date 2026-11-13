typedef struct Device_826387D0 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x28dc - 0x18];
    unsigned int bits;
    char pad28e0[0x2f08 - 0x28e0];
    unsigned int value;
    char pad2f0c[0x314c - 0x2f0c];
    int enabled;
} Device_826387D0;

static __forceinline void orq_826387D0(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_826387D0(Device_826387D0 *d, unsigned int v)
{
    d->value = v;
    d->bits = (d->bits & 0xffffff0f) | (((d->enabled ? v : 0) & 0xf) << 4);
    orq_826387D0(&d->dirty10, 0x2000000000);
}
