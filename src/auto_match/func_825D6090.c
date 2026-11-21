typedef struct Device_825D6090 {
    char pad0[0x10];
    unsigned __int64 dirty; /* 0x10 */
    char pad18[0x2901 - 0x18];
    unsigned char state2901; /* 0x2901 */
    char pad2902;            /* 0x2902 */
    unsigned char state2903; /* 0x2903 */
    char pad2904[0x2934 - 0x2904];
    unsigned int flags; /* 0x2934 */
    char pad2938[0x2f18 - 0x2938];
    unsigned int state2f18; /* 0x2f18 */
} Device_825D6090;

typedef struct Owner_825D6090 {
    unsigned int locked;  /* 0x0 */
    unsigned int pending; /* 0x4 */
} Owner_825D6090;

static __forceinline void ClearFlag(unsigned int *flags, unsigned int mask)
{
    *flags &= ~mask;
}

static __forceinline void SetDirty(unsigned __int64 *dirty, unsigned __int64 mask)
{
    *dirty |= mask;
}

static __forceinline unsigned int ClearBits(unsigned int *flags, unsigned int mask)
{
    unsigned int value;

    value = *flags & ~mask;
    *flags = value;
    return value;
}

void fn_825D6090(Owner_825D6090 *self, Device_825D6090 *dev, unsigned int mask)
{
    unsigned int pending;

    pending = ClearBits(&self->pending, mask);
    if (self->locked == 0 && pending == 0) {
        ClearFlag(&dev->flags, 0x1c000);
        SetDirty(&dev->dirty, 0x800);
        ClearFlag(&dev->flags, 0x700);
        SetDirty(&dev->dirty, 0x800);
        dev->state2903 = 0;
        SetDirty(&dev->dirty, 0x10000000);
        dev->state2901 = 0xff;
        SetDirty(&dev->dirty, 0x10000000);
        dev->state2f18 = 0;
        ClearFlag(&dev->flags, 1);
        SetDirty(&dev->dirty, 0x20800);
    } else {
        dev->state2901 = (unsigned char)(self->locked | self->pending);
        SetDirty(&dev->dirty, 0x10000000);
    }
}
