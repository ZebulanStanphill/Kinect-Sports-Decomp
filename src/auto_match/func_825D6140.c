typedef struct Device_825D6140 {
    char pad0[0x10];
    unsigned __int64 dirty; /* 0x10 */
    char pad18[0x2901 - 0x18];
    unsigned char state2901; /* 0x2901 */
    char pad2902;            /* 0x2902 */
    unsigned char state2903; /* 0x2903 */
    char pad2904[0x2934 - 0x2904];
    unsigned int flags; /* 0x2934 */
    char pad2938[0x2940 - 0x2938];
    unsigned int flags2940; /* 0x2940 */
    char pad2944[0x2f18 - 0x2944];
    unsigned int state2f18; /* 0x2f18 */
} Device_825D6140;

typedef struct Owner_825D6140 {
    unsigned int locked;  /* 0x0 */
    unsigned int pending; /* 0x4 */
    unsigned int state8;  /* 0x8 */
} Owner_825D6140;

static __forceinline void ClearFlag(unsigned int *flags, unsigned int mask)
{
    *flags &= ~mask;
}

static __forceinline void SetDirty(unsigned __int64 *dirty, unsigned __int64 mask)
{
    *dirty |= mask;
}

void fn_825D6140(Owner_825D6140 *self, Device_825D6140 *dev)
{
    self->locked = 0;
    self->pending = 0;
    self->state8 = 0;
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
    ClearFlag(&dev->flags2940, 0x8);
    SetDirty(&dev->dirty, 0x100);
}
