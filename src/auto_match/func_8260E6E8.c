typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Color_8260E6E8 {
    char pad00[0x10];
    unsigned char red;   /* 0x10 */
    unsigned char green; /* 0x11 */
    unsigned char blue;  /* 0x12 */
} Color_8260E6E8;

typedef struct Material_8260E6E8 {
    char pad00[0x10];
    __vector4 color; /* 0x10 */
} Material_8260E6E8;

typedef struct Mesh_8260E6E8 {
    char pad000[0x1a8];
    Material_8260E6E8 *material; /* 0x1a8 */
} Mesh_8260E6E8;

typedef struct Self_8260E6E8 {
    char pad00[0x60];
    Mesh_8260E6E8 **meshes; /* 0x60 */
} Self_8260E6E8;

extern const float lbl_821954B0[0x28a];
extern const float lbl_821CA45C[2];

void fn_8260E6E8(Self_8260E6E8 *self, int unused, const Color_8260E6E8 *color)
{
    __vector4 value;

    value.vector4_f32[0] = color->red * lbl_821954B0[8];
    value.vector4_f32[1] = color->green * lbl_821954B0[8];
    value.vector4_f32[2] = color->blue * lbl_821954B0[8];
    value.vector4_f32[3] = lbl_821CA45C[1];
    self->meshes[0]->material->color = value;
}
