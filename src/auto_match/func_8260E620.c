typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Color_8260E620 {
    char pad00[0x10];
    unsigned char red;   /* 0x10 */
    unsigned char green; /* 0x11 */
    unsigned char blue;  /* 0x12 */
    char pad13;
    float angles[3]; /* 0x14 */
} Color_8260E620;

typedef struct Material_8260E620 {
    char pad00[0x20];
    __vector4 color;     /* 0x20 */
    __vector4 direction; /* 0x30 */
} Material_8260E620;

typedef struct Mesh_8260E620 {
    char pad000[0x1a8];
    Material_8260E620 *material; /* 0x1a8 */
} Mesh_8260E620;

typedef struct Self_8260E620 {
    char pad00[0x60];
    Mesh_8260E620 **meshes; /* 0x60 */
} Self_8260E620;

extern const float lbl_821954B0[0x28a];
extern const float lbl_821CA45C[2];

__vector4 __VMXGetReg(int reg);
__vector4 fn_8255ABF8(const float *angles, __vector4 v);

void fn_8260E620(Self_8260E620 *self, int unused, const Color_8260E620 *color)
{
    __vector4 value;
    __vector4 direction;
    Material_8260E620 *material;

    value.vector4_f32[0] = color->red * lbl_821954B0[8];
    value.vector4_f32[1] = color->green * lbl_821954B0[8];
    value.vector4_f32[2] = color->blue * lbl_821954B0[8];
    value.vector4_f32[3] = lbl_821CA45C[1];
    material = self->meshes[0]->material;
    direction = fn_8255ABF8(color->angles, __VMXGetReg(71));
    material->color = value;
    material->direction = direction;
}
