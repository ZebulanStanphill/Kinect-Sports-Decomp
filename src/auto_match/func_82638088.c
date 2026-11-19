extern const float lbl_821954B0[0xa28 / 4];
extern const float lbl_8218E8E8;

typedef struct Color_82638088 {
    float r; /* 0x0 */
    float g; /* 0x4 */
    float b; /* 0x8 */
    float a; /* 0xc */
} Color_82638088;

typedef struct Device_82638088 {
    char pad0[0x28e0];
    Color_82638088 blend; /* 0x28e0 */
} Device_82638088;

/* The colour as A8R8G8B8 (lbl_821954B0[0x194 / 4] is the 255 scale). */
unsigned int fn_82638088(Device_82638088 *d)
{
    unsigned int a = (unsigned int)(d->blend.a * lbl_821954B0[0x194 / 4] + lbl_8218E8E8);
    unsigned int r = (unsigned int)(d->blend.r * lbl_821954B0[0x194 / 4] + lbl_8218E8E8);
    unsigned int g = (unsigned int)(d->blend.g * lbl_821954B0[0x194 / 4] + lbl_8218E8E8);
    unsigned int b = (unsigned int)(d->blend.b * lbl_821954B0[0x194 / 4] + lbl_8218E8E8);

    return ((((a << 8) | (r & 0xff)) << 8 | (g & 0xff)) << 8) | (b & 0xff);
}
