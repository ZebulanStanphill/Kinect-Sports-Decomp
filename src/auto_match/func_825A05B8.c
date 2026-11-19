typedef struct Device_825A05B8 {
    char pad0[0x10];
    unsigned __int64 dirty;  /* 0x10 */
    unsigned __int64 pad18;  /* 0x18 */
    unsigned __int64 dirty2; /* 0x20 */
    char pad28[0x2934 - 0x28];
    unsigned int pad2934a : 25;
    unsigned int mode : 2; /* 0x2934 */
    unsigned int modeFlag : 1;
    unsigned int pad2934b : 4;
    char pad2938[0x2948 - 0x2938];
    unsigned int pad2948a : 29;
    unsigned int filter : 2; /* 0x2948 */
    unsigned int clamp : 1;
    char pad294c[0x29c0 - 0x294c];
    unsigned int pad29c0 : 31;
    unsigned int enable : 1; /* 0x29c0 */
} Device_825A05B8;

extern void fn_8263CBB0(Device_825A05B8 *dev, unsigned int index, void *value, unsigned __int64 mask);

static __forceinline void SetDirty(unsigned __int64 *d, unsigned __int64 m)
{
    *d |= m;
}

void fn_825A05B8(Device_825A05B8 *dev)
{
    fn_8263CBB0(dev, 0, 0, 0x80000000);
    fn_8263CBB0(dev, 1, 0, 0x40000000);
    fn_8263CBB0(dev, 2, 0, 0x20000000);
    fn_8263CBB0(dev, 3, 0, 0x10000000);
    fn_8263CBB0(dev, 4, 0, 0x08000000);
    fn_8263CBB0(dev, 5, 0, 0x04000000);
    dev->mode = 3;
    dev->modeFlag = 0;
    SetDirty(&dev->dirty, 0x800);
    SetDirty(&dev->dirty, 0x20000);
    dev->filter = 1;
    dev->clamp = 0;
    SetDirty(&dev->dirty, 0x40);
    dev->enable = 0;
    SetDirty(&dev->dirty2, 0x800000000ULL);
}
