typedef struct Device_82544F40 {
    char pad0[0x10];
    unsigned __int64 dirty; /* 0x10 */
    char pad18[0x2904 - 0x18];
    float alphaRef; /* 0x2904 */
    char pad2908[0x293c - 0x2908];
    unsigned int blend; /* 0x293c */
    char pad2940[0x2948 - 0x2940];
    unsigned int stencil; /* 0x2948 */
    char pad294c[0x2ed8 - 0x294c];
    int tessellation; /* 0x2ed8 */
} Device_82544F40;

extern Device_82544F40 *lbl_8320A898;

extern void fn_82637BC0(Device_82544F40 *device, unsigned int value);
extern void fn_82637C50(Device_82544F40 *device, unsigned int value);
extern void fn_82637CE0(Device_82544F40 *device, unsigned int value);
extern void fn_82637B30(Device_82544F40 *device, int enable);
extern void fn_82544918(int enable, Device_82544F40 *device);
extern void fn_82544E80(Device_82544F40 *device);
extern void fn_82631920(Device_82544F40 *device, void *shader);
extern void fn_82631578(Device_82544F40 *device, void *shader);
extern void fn_82639F78(Device_82544F40 *device, int index, void *texture, int offset, int a,
                        unsigned __int64 dirty);
extern void fn_8263A120(Device_82544F40 *device, void *resource);

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

static __forceinline void SetBits(unsigned int *p, unsigned int m)
{
    *p |= m;
}

static __forceinline void ClearBits(unsigned int *p, unsigned int m)
{
    *p &= ~m;
}

/* Puts the render device back into its default state. */
void fn_82544F40(void)
{
    Device_82544F40 *device;
    int i;

    device = lbl_8320A898;
    ClearBits(&device->stencil, 7);
    SetDirty(&device->dirty, 0x40);
    fn_82637BC0(device, 0);
    fn_82637C50(device, 6);
    fn_82637CE0(device, 7);
    fn_82637B30(device, 1);
    SetBits(&device->blend, 8);
    SetDirty(&device->dirty, 0x40200);
    device->alphaRef = 0.019607844f;
    SetDirty(&device->dirty, 0x8000000);
    device->blend = device->blend & ~7 | 4;
    SetDirty(&device->dirty, 0x200);
    fn_82544918(1, device);
    fn_82544E80(device);
    fn_82631920(device, 0);
    fn_82631578(device, 0);
    device->tessellation = 0;
    SetDirty(&device->dirty, 0x80000);
    /* (0x5f - i) * 0x5556 >> 16 is (0x5f - i) / 3 for these small values */
    for (i = 0; i < 16; i++) {
        fn_82639F78(device, i, 0, 0, 0, 0x8000000000000000ULL >> ((((0x5fu - i) * 0x5556) >> 16) + 32));
    }
    fn_8263A120(device, 0);
}
