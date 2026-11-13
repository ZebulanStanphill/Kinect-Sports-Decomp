typedef struct Device_826381E0 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x2934 - 0x18];
    unsigned int bits;
    char pad2938[0x2f14 - 0x2938];
    unsigned int value;
    char pad2f18[0x3158 - 0x2f18];
    int enabled;
} Device_826381E0;

static __forceinline void orq_826381E0(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_826381E0(Device_826381E0 *d, unsigned int v)
{
    d->value = v;
    d->bits = (d->bits & 0xfffffffd) | (((d->enabled ? v : 0) & 1) << 1);
    orq_826381E0(&d->dirty10, 0x800);
    orq_826381E0(&d->dirty10, 0x20000);
}
