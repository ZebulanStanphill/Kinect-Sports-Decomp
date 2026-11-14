typedef struct Bits_82637EC0 {
    unsigned int enabled : 1;       /* bit 31 */
    unsigned int custom : 1;        /* bit 30 */
    unsigned int rest : 30;
} Bits_82637EC0;

typedef union Value_82637EC0 {
    unsigned int all;
    struct {
        unsigned int pad29 : 3;
        unsigned int backD : 5;     /* bits 24-28 */
        unsigned int backC : 3;     /* bits 21-23 */
        unsigned int backB : 5;     /* bits 16-20 */
        unsigned int pad13 : 3;
        unsigned int back : 5;      /* bits 8-12 */
        unsigned int mid : 3;
        unsigned int front : 5;     /* bits 0-4 */
    } f;
} Value_82637EC0;

typedef struct Device_82637EC0 {
    char pad0[0x10];
    unsigned __int64 dirty;         /* 0x10 */
    char pad18[0x2938 - 0x18];
    unsigned int state2938;         /* 0x2938 */
    char pad293c[0x2958 - 0x293c];
    unsigned int state2958[3];      /* 0x2958 */
    char pad2964[0x2ef8 - 0x2964];
    Value_82637EC0 value;           /* 0x2ef8 */
    unsigned int bits;              /* 0x2efc */
} Device_82637EC0;

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

static __forceinline void WriteState(Device_82637EC0 *d, unsigned int v)
{
    d->state2938 = v;
    d->state2958[0] = v;
    d->state2958[1] = v;
    d->state2958[2] = v;
    SetDirty(&d->dirty, 0x400);
    SetDirty(&d->dirty, 0x4);
    SetDirty(&d->dirty, 0x2);
    SetDirty(&d->dirty, 0x1);
}

static __forceinline void UpdateState(Device_82637EC0 *d)
{
    unsigned int bits = d->bits;
    unsigned int *pv = &d->value.all;
    unsigned int v;
    if (!(bits & 0x80000000))
        return;
    v = *pv;
    if (!(bits & 0x40000000)) {
        unsigned int lo = v & 0xffff;
        v = (((v & 0x1010) | (lo << 4)) << 12 & 0xffff0000 & ~0x10100000) | lo;
    }
    d->state2938 = v;
    d->state2958[0] = v;
    d->state2958[1] = v;
    d->state2958[2] = v;
    SetDirty(&d->dirty, 0x400);
    SetDirty(&d->dirty, 0x4);
    SetDirty(&d->dirty, 0x2);
    SetDirty(&d->dirty, 0x1);
}

void fn_82637D70(Device_82637EC0 *d, unsigned int x)
{
    unsigned int *pv;
    d->value.f.backC = x;
    pv = &d->value.all;
    if ((d->bits & 0x80000000) && (d->bits & 0x40000000))
        WriteState(d, *pv);
}
