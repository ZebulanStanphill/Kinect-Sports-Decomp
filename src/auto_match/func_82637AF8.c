typedef struct Device_82637AF8 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x293c - 0x18];
    unsigned int bits;
} Device_82637AF8;

static __forceinline void orq_82637AF8(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82637AF8(Device_82637AF8 *d, unsigned int v)
{
    d->bits = (d->bits & 0xfffffff7) | ((v & 1) << 3);
    orq_82637AF8(&d->dirty10, 0x200);
    orq_82637AF8(&d->dirty10, 0x40000);
}
