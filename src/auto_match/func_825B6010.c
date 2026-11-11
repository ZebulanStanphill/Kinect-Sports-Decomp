// Reads the float3 at +0x40 of the object reached through self->owner->node->data and
// widens it to a vector with w cleared (reserved zero vector v77, select mask v67).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_825B6010 {
    float x, y, z;
} Float3_825B6010;

typedef struct Data_825B6010 {
    char pad0[0x40];
    Float3_825B6010 value;         // 0x40
} Data_825B6010;

typedef struct Node_825B6010 {
    int unk0;                // 0x00
    Data_825B6010 *data;           // 0x04
} Node_825B6010;

typedef struct Owner_825B6010 {
    char pad0[0x10];
    Node_825B6010 *node;           // 0x10
} Owner_825B6010;

typedef struct Self_825B6010 {
    int unk0;                // 0x00
    Owner_825B6010 *owner;         // 0x04
} Self_825B6010;

static __forceinline __vector4 LoadFloat3(const Float3_825B6010 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

// Float3 widened to a vector with w cleared (zero vector v77 selected through mask v67).
static __forceinline __vector4 LoadFloat3W0(const Float3_825B6010 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

void fn_825B6010(Self_825B6010 *self, __vector4 *out)
{
    *out = LoadFloat3W0(&self->owner->node->data->value);
}
