typedef struct Device_826382C8 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x2934 - 0x18];
    unsigned int bits;
} Device_826382C8;

static __forceinline void orq_826382C8(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_826382C8(Device_826382C8 *d, unsigned int v)
{
    d->bits = (d->bits & 0xffffff7f) | ((v & 1) << 7);
    orq_826382C8(&d->dirty10, 0x800);
    orq_826382C8(&d->dirty10, 0x20000);
}
