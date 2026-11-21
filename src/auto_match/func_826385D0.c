typedef struct ModeControl_826385D0 {
    unsigned int pad0 : 19;
    unsigned int offsetBack : 1;  /* bit 12 */
    unsigned int offsetFront : 1; /* bit 11 */
    unsigned int pad1 : 11;
} ModeControl_826385D0;

typedef struct Device_826385D0 {
    char pad0[0x10];
    unsigned __int64 dirty; /* 0x10 */
    char pad18[0x8];
    unsigned __int64 dirtyStates; /* 0x20 */
    char pad28[0x2948 - 0x28];
    ModeControl_826385D0 mode; /* 0x2948 */
    char pad294c[0x2a50 - 0x294c];
    float frontOffset; /* 0x2a50 */
    float frontScale;  /* 0x2a54 */
    float backOffset;  /* 0x2a58 */
    float backScale;   /* 0x2a5c */
} Device_826385D0;

static __forceinline void SetDirty(unsigned __int64 *flags, unsigned __int64 bits)
{
    *flags |= bits;
}

/* Sets the depth bias (a float passed as its bits) for front and back faces. */
void fn_826385D0(Device_826385D0 *device, unsigned int value)
{
    float bias = *(float *)&value * 16.0f;

    device->mode.offsetFront = bias != 0.0f || device->frontScale != 0.0f;
    device->mode.offsetBack = bias != 0.0f || device->backScale != 0.0f;
    device->frontOffset = bias;
    device->backOffset = bias;
    SetDirty(&device->dirtyStates, 0x200000000000);
    SetDirty(&device->dirtyStates, 0x80000000000);
    SetDirty(&device->dirty, 0x40);
}
