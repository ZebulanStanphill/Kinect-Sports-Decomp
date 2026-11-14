typedef struct Device_825427C0 {
    char pad0[0x10];
    unsigned __int64 dirty;        /* 0x10 */
    char pad18[0x2904 - 0x18];
    float value;                   /* 0x2904 */
    char pad2908[0x2934 - 0x2908];
    unsigned int flags;            /* 0x2934 */
} Device_825427C0;

extern void fn_82637C50(Device_825427C0 *dev, int value);
extern void fn_82637CE0(Device_825427C0 *dev, int value);

static __forceinline void ClearFlag(unsigned int *flags, unsigned int mask)
{
    *flags &= ~mask;
}

void fn_825427C0(Device_825427C0 **self)
{
    Device_825427C0 *dev;

    fn_82637C50(*self, 6);
    fn_82637CE0(*self, 7);
    dev = *self;
    ClearFlag(&dev->flags, 4);
    dev->dirty |= 0x800;
    dev = *self;
    dev->value = 0.0f;
    dev->dirty |= 0x8000000;
}
