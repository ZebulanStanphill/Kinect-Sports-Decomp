typedef struct Device_82638288 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x2934 - 0x18];
    unsigned int bits;
    char pad2938[0x2f18 - 0x2938];
    unsigned int value;
    char pad2f1c[0x3158 - 0x2f1c];
    int enabled;
} Device_82638288;

static __forceinline void orq_82638288(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638288(Device_82638288 *d, unsigned int v)
{
    d->value = v;
    d->bits = (d->bits & 0xfffffffe) | ((d->enabled ? v : 0) & 1);
    orq_82638288(&d->dirty10, 0x800);
    orq_82638288(&d->dirty10, 0x20000);
}
