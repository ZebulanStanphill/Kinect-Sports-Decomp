typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_8226C900 {
    __vector4 r[4];
} Matrix_8226C900;

typedef struct Cell_8226C900 {
    char pad0[0x30];
    float position[3];          /* 0x30 */
    char pad3c[0xb4];
} Cell_8226C900;

typedef struct Parent_8226C900 {
    char pad0[0xf0];
    Matrix_8226C900 world;      /* 0xf0 */
} Parent_8226C900;

typedef struct Grid_8226C900 {
    char pad0[0x8];
    Parent_8226C900 *parent;    /* 0x08 */
    char padc[0x34];
    Cell_8226C900 *cells;       /* 0x40 */
    char pad44[0x4];
    int width;                  /* 0x48 */
    int height;                 /* 0x4c */
    char pad50[0x25];
    unsigned char useLocal;     /* 0x75 */
    char pad76[0xa];
    Matrix_8226C900 local;      /* 0x80 */
} Grid_8226C900;

static __forceinline __vector4 Transform(__vector4 v, Matrix_8226C900 m)
{
    __vector4 x, y, z, r;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    r = __vmaddfp(m.r[2], z, m.r[3]);
    r = __vmaddfp(y, m.r[1], r);
    r = __vmaddfp(x, m.r[0], r);
    return r;
}

static __forceinline __vector4 SetW0(__vector4 v)
{
    __vector4 zero = __VMXGetReg(77);
    __vector4 mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

static __forceinline int Clamp(int v, int hi)
{
    v = v < 0 ? 0 : v;
    return v < hi ? v : hi;
}

void fn_8226C900(const Grid_8226C900 *self, const float *pos, __vector4 *out)
{
    int x, y;
    const Cell_8226C900 *cell;
    __vector4 v;

    x = (int)pos[0];
    y = (int)pos[1];
    x = Clamp(x, self->width - 1);
    y = Clamp(y, self->height - 1);
    cell = &self->cells[y * self->width + x];
    v.vector4_f32[0] = cell->position[0];
    v.vector4_f32[1] = cell->position[1];
    v.vector4_f32[2] = cell->position[2];
    if (self->useLocal) {
        *out = SetW0(Transform(v, self->local));
    } else if (self->parent != 0) {
        *out = SetW0(Transform(v, self->parent->world));
    } else {
        *out = v;
    }
}
