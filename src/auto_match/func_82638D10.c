typedef struct Device_82638D10 {
    char pad0[0x10];
    unsigned __int64 dirty10;
    char pad18[0x2944 - 0x18];
    unsigned int bits;              /* 0x2944 */
    char pad2948[4];
    unsigned int mask;              /* 0x294c */
} Device_82638D10;

static __forceinline void orq_82638D10(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638D10(Device_82638D10 *d, unsigned int enable)
{
    if (enable)
        d->mask = 0x43f;
    else
        d->mask = 0x400;
    d->bits = (d->bits & 0xfffeffff) | (((enable == 0) & 1) << 16);
    orq_82638D10(&d->dirty10, 0x20);
    orq_82638D10(&d->dirty10, 0x80);
}
