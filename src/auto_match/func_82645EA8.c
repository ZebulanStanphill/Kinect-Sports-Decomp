typedef struct Surface_82645EA8 Surface_82645EA8;

typedef struct Device_82645EA8 {
    char pad0[0x30];
    unsigned int *cursor; /* 0x30 */
    int pad34;
    unsigned int *limit; /* 0x38 */
    char pad3C[0x2ab4 - 0x3c];
    unsigned int predication; /* 0x2ab4 */
    int predicationCount;     /* 0x2ab8 */
    unsigned char stateFlags; /* 0x2abc */
    char pad2ABD[0x304b - 0x2abd];
    unsigned char suspended; /* 0x304b */
    char pad304C[0x3148 - 0x304c];
    Surface_82645EA8 *targets[5]; /* 0x3148 */
    char pad315C[0x3254 - 0x315c];
    unsigned int tile; /* 0x3254 */
    int x3258;         /* 0x3258 */
    int tiling;        /* 0x325c */
    char pad3260[0x3268 - 0x3260];
    Surface_82645EA8 *savedTargets[5]; /* 0x3268 */
} Device_82645EA8;

extern unsigned int *fn_82645110(Device_82645EA8 *device);

static __forceinline unsigned char TargetsUnchanged(Device_82645EA8 *device)
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

static __forceinline unsigned char UsesSavedTargets(Device_82645EA8 *device)
{
    return (device->stateFlags & 0x10) ? 1 : TargetsUnchanged(device);
}

void fn_82645EA8(Device_82645EA8 *device, unsigned int tile)
{
    unsigned int *cursor;

    if (tile == 0) {
        device->tiling = 0;
        device->stateFlags =
            (device->stateFlags & 0xfe) | ((!(device->stateFlags & 8) && !(device->stateFlags & 4) &&
                                            !device->suspended && UsesSavedTargets(device)) &
                                           1);
        device->tile = -1;
        device->x3258 = 0;
    } else {
        device->tile = tile;
        device->x3258 = 0;
        device->tiling = 1;
        device->stateFlags &= 0xfe;
    }
    device->predication = tile;
    device->predicationCount = 0;
    cursor = device->cursor;
    if (cursor > device->limit) {
        cursor = fn_82645110(device);
    }
    *++cursor = 0xc0006000;
    *++cursor = device->tile;
    device->cursor = cursor;
}
