typedef struct Device_825D4748 {
    char pad0[0x8];
    unsigned __int64 flags; /* 0x8 */
    char pad10[0x17d0 - 0x10];
    float color[4]; /* 0x17d0 */
} Device_825D4748;

extern void *fn_8263FB88(Device_825D4748 *device, unsigned int type, void *desc, unsigned int size);
extern void fn_82645EA8(void *device, unsigned int mode);
extern void fn_8264C1F8(Device_825D4748 *device, int a, int b);
extern Device_825D4748 *lbl_8320A898;

static __forceinline void SetFlag(unsigned __int64 *flags)
{
    *flags |= 0x4000000000000000;
}

static __forceinline int CheckAlloc(void *p)
{
    return p != 0 ? 0 : 0x8007000E;
}

int fn_825D4748(Device_825D4748 *device, void *desc, void **out)
{
    void *created;
    int hr;

    device->color[0] = 0.0f;
    device->color[1] = 1.0f;
    device->color[2] = 0.0f;
    device->color[3] = 0.0f;
    SetFlag(&device->flags);
    created = fn_8263FB88(device, 0xd, desc, 0x1c);
    *out = created;
    hr = CheckAlloc(created);
    if (hr >= 0)
        return 1;
    if (device == lbl_8320A898)
        fn_82645EA8(device, 0);
    else
        fn_8264C1F8(device, 0, 0);
    return 0;
}
