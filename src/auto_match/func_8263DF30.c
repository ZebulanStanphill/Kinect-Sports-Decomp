typedef struct Rect_8263DF30 {
    int left;   /* 0x00 */
    int top;    /* 0x04 */
    int right;  /* 0x08 */
    int bottom; /* 0x0c */
} Rect_8263DF30;

typedef struct SurfaceSize_8263DF30 {
    unsigned int widthMinusOne : 14;
    unsigned int heightMinusOne : 15;
    unsigned int format : 3;
} SurfaceSize_8263DF30;

typedef struct Surface_8263DF30 {
    char pad0[0x24];
    SurfaceSize_8263DF30 size; /* 0x24 */
} Surface_8263DF30;

typedef struct Device_8263DF30 {
    char pad0[0x2abc];
    unsigned char stateFlags; /* 0x2abc */
    char pad2ABD[0x3148 - 0x2abd];
    Surface_8263DF30 *targets[5]; /* 0x3148 */
    char pad315C[0x3268 - 0x315c];
    Surface_8263DF30 *savedTargets[5]; /* 0x3268 */
    char pad327C[0x342c - 0x327c];
    int savedWidth;  /* 0x342c */
    int savedHeight; /* 0x3430 */
} Device_8263DF30;

extern void fn_8263D7F0(Device_8263DF30 *device, int flags, Rect_8263DF30 *rect, const void *color,
                        float depth, unsigned int stencil);

static __forceinline unsigned char TargetsUnchanged(Device_8263DF30 *device)
{
    if ((device->stateFlags & 0x20) &&
        (device->savedTargets[0] == device->targets[0] || device->targets[0] == 0) &&
        (device->savedTargets[1] == device->targets[1] || device->targets[1] == 0) &&
        (device->savedTargets[2] == device->targets[2] || device->targets[2] == 0) &&
        (device->savedTargets[3] == device->targets[3] || device->targets[3] == 0) &&
        (device->savedTargets[4] == device->targets[4] || device->targets[4] == 0)) {
        return 1;
    }
    return 0;
}

static __forceinline unsigned char UsesSavedTargets(Device_8263DF30 *device)
{
    return (device->stateFlags & 0x10) ? 1 : TargetsUnchanged(device);
}

void fn_8263DF30(Device_8263DF30 *device, int flags, Rect_8263DF30 *rect, const void *color, float depth,
                 unsigned int stencil)
{
    Rect_8263DF30 fullRect;
    SurfaceSize_8263DF30 size;

    if (rect == 0) {
        Surface_8263DF30 *target = device->targets[0];

        if (target == 0) {
            target = device->targets[4];
        }
        size = target->size;
        fullRect.left = 0;
        fullRect.top = 0;
        fullRect.right = size.widthMinusOne + 1;
        fullRect.bottom = size.heightMinusOne + 1;
        if (UsesSavedTargets(device)) {
            fullRect.right = device->savedWidth;
            fullRect.bottom = device->savedHeight;
        }
        rect = &fullRect;
    }
    fn_8263D7F0(device, flags, rect, color, depth, stencil);
}
