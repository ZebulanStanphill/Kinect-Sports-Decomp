// Reads the float3 at +0x4 of the object reached through self->owner->node->data and
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

typedef struct Float3_825B5EE8 {
    float x, y, z;
} Float3_825B5EE8;

typedef struct Data_825B5EE8 {
    char pad0[0x4];
    Float3_825B5EE8 value;         // 0x4
} Data_825B5EE8;

typedef struct Node_825B5EE8 {
    int unk0;                // 0x00
    Data_825B5EE8 *data;           // 0x04
} Node_825B5EE8;

typedef struct Owner_825B5EE8 {
    char pad0[0x10];
    Node_825B5EE8 *node;           // 0x10
} Owner_825B5EE8;

typedef struct Self_825B5EE8 {
    int unk0;                // 0x00
    Owner_825B5EE8 *owner;         // 0x04
} Self_825B5EE8;

static __forceinline __vector4 LoadFloat3(const Float3_825B5EE8 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

// Float3 widened to a vector with w cleared (zero vector v77 selected through mask v67).
static __forceinline __vector4 LoadFloat3W0(const Float3_825B5EE8 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

void fn_825B5EE8(Self_825B5EE8 *self, __vector4 *out)
{
    *out = LoadFloat3W0(&self->owner->node->data->value);
}
