extern float lbl_82005328;

typedef struct Color_82677848 {
    float r; /* 0x0 */
    float g; /* 0x4 */
    float b; /* 0x8 */
    float a; /* 0xc */
} Color_82677848;

typedef struct Device_82677848 {
    char pad0[8];
    unsigned __int64 dirty; /* 0x8 */
    char pad10[0x1780 - 0x10];
    Color_82677848 color; /* 0x1780 */
} Device_82677848;

typedef struct Renderer_82677848 {
    char pad0[0xd8];
    Device_82677848 *device; /* 0xd8 */
    char padDC[0x1d0 - 0xdc];
    int blendMode; /* 0x1d0 */
} Renderer_82677848;

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82677848(Renderer_82677848 *renderer, unsigned char *argb)
{
    float r;
    float a;
    float g;
    float b;
    Device_82677848 *device;

    r = (float)argb[1] * lbl_82005328;
    g = (float)argb[2] * lbl_82005328;
    b = (float)argb[3] * lbl_82005328;
    a = (float)argb[0] * lbl_82005328;
    if (renderer->blendMode == 3 || renderer->blendMode == 6) {
        r = (r - 1.0f) * ((float)argb[0] * lbl_82005328) + 1.0f;
        g = (g - 1.0f) * ((float)argb[0] * lbl_82005328) + 1.0f;
        b = (b - 1.0f) * ((float)argb[0] * lbl_82005328) + 1.0f;
    }
    device = renderer->device;
    device->color.r = r;
    device->color.g = g;
    device->color.b = b;
    device->color.a = a;
    SetDirty(&device->dirty, 0x8000000000000000);
}
