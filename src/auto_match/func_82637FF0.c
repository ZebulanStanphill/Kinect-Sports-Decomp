extern const float lbl_821954B0[];

typedef struct Color_82637FF0 {
    float r, g, b, a;
} Color_82637FF0;

typedef struct Device_82637FF0 {
    char pad0[0x10];
    unsigned __int64 dirty;         /* 0x10 */
    char pad18[0x28e0 - 0x18];
    Color_82637FF0 blend;           /* 0x28e0 */
} Device_82637FF0;

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

/* An A8R8G8B8 colour as four floats (lbl_821954B0[8] is the 1/255 scale). */
static __forceinline void ColorToFloat(Color_82637FF0 *out, unsigned int color)
{
    float a = (float)(color >> 24) * lbl_821954B0[8];
    float r = (float)((color >> 16) & 0xff) * lbl_821954B0[8];
    float g = (float)((color >> 8) & 0xff) * lbl_821954B0[8];
    float b = (float)(color & 0xff) * lbl_821954B0[8];
    out->a = a;
    out->r = r;
    out->g = g;
    out->b = b;
}

void fn_82637FF0(Device_82637FF0 *d, unsigned int color)
{
    ColorToFloat(&d->blend, color);
    SetDirty(&d->dirty, 0x1e00000000);
}
