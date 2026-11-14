typedef struct Device_82638560 {
    char pad0[0x10];
    unsigned __int64 dirty;         /* 0x10 */
    char pad18[0x28b4 - 0x18];
    unsigned int state28b4;         /* 0x28b4 */
    char pad28b8[0x2944 - 0x28b8];
    unsigned int state2944;         /* 0x2944 */
} Device_82638560;

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82638560(Device_82638560 *d, unsigned int count)
{
    d->state2944 = (d->state2944 & ~0x3f) | count;
    d->state28b4 = count ? 0x1000 : 0;
    SetDirty(&d->dirty, 0x80);
    SetDirty(&d->dirty, 0x100000000000);
}
