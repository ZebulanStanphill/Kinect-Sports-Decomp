typedef struct Rect_826374C0 {
    int left;
    int top;
    int right;
    int bottom;
} Rect_826374C0;

typedef struct Bounds_82639EA8 {
    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;
    float nearPlane;
    float farPlane;
} Bounds_82639EA8;

typedef struct Params_826374C0 {
    char pad0[0x18];
    unsigned int mode; /* 0x18 */
} Params_826374C0;

typedef struct Device_826374C0 {
    char pad0[0x10];
    unsigned __int64 dirtyA; /* 0x10 */
    char pad18[0x8];
    unsigned __int64 dirtyB; /* 0x20 */
    char pad28[0x2858];
    unsigned int mode; /* 0x2880 */
    char pad2884[0x138];
    unsigned int modeMask; /* 0x29bc */
    char pad29c0[0x874];
    Rect_826374C0 scissor; /* 0x3234 */
} Device_826374C0;

extern const Rect_826374C0 lbl_821CC048;
extern const Bounds_82639EA8 lbl_821CC030;

extern void fn_82639EA8(Device_826374C0 *device, const Bounds_82639EA8 *bounds);

static __forceinline void SetDirty_826374C0(unsigned __int64 *flags, unsigned __int64 bits)
{
    *flags |= bits;
}

void fn_826374C0(Device_826374C0 *device, const Params_826374C0 *params)
{
    unsigned int mode;
    unsigned int select;
    unsigned int mask;

    mode = params->mode;
    select = (mode >> 16) & 3;
    if (select == 0) {
        mask = 0;
    } else if (select == 1) {
        mask = 0x8001;
    } else {
        mask = 0xc003;
    }
    device->modeMask = mask;
    device->mode = mode;
    SetDirty_826374C0(&device->dirtyA, 0x200000000000000ULL);
    SetDirty_826374C0(&device->dirtyB, 0x1000000000ULL);
    device->scissor = lbl_821CC048;
    fn_82639EA8(device, &lbl_821CC030);
}
