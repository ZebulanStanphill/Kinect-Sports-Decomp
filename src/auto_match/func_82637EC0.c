typedef struct Device_82637EC0 {
    char pad0[0x10];
    unsigned __int64 dirty;         /* 0x10 */
    char pad18[0x2938 - 0x18];
    unsigned int state2938;         /* 0x2938 */
    char pad293c[0x2958 - 0x293c];
    unsigned int state2958[3];      /* 0x2958 */
    char pad2964[0x2ef8 - 0x2964];
    unsigned int value;             /* 0x2ef8 */
    unsigned int bits;              /* 0x2efc */
} Device_82637EC0;

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

static __forceinline unsigned int SetBit30(unsigned int *p, int enable)
{
    unsigned int b = (*p & 0xbfffffff) | ((enable & 1) << 30);
    *p = b;
    return b;
}

void fn_82637EC0(Device_82637EC0 *d, int enable)
{
    unsigned int v;
    int top;

    top = SetBit30(&d->bits, enable) >> 31;
    v = d->value;
    if (enable == 0) {
        unsigned int lo = v & 0xffff;
        v = (((v & 0x1010) | (lo << 4)) << 12 & 0xffff0000 & ~0x10100000) | lo;
    }
    if (!top)
        v = 0x10001;
    d->state2938 = v;
    d->state2958[0] = v;
    d->state2958[1] = v;
    d->state2958[2] = v;
    SetDirty(&d->dirty, 0x400);
    SetDirty(&d->dirty, 0x4);
    SetDirty(&d->dirty, 0x2);
    SetDirty(&d->dirty, 0x1);
}
