/* Virtual (slot 9 of the vtable at lbl_821C84A4): writes the float3 at +0x4c of
   self->owner->node->data as a vector, w cleared with the reserved zero/mask registers. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_825B6048 {
    float x, y, z;
} Float3_825B6048;

typedef struct Data_825B6048 {
    char pad00[0x4c];
    Float3_825B6048 position;   /* 0x4c */
} Data_825B6048;

typedef struct Node_825B6048 {
    char pad00[0x4];
    Data_825B6048 *data;        /* 0x04 */
} Node_825B6048;

typedef struct Owner_825B6048 {
    char pad00[0x10];
    Node_825B6048 *node;        /* 0x10 */
} Owner_825B6048;

typedef struct Self_825B6048 {
    void *vtbl;
    Owner_825B6048 *owner;      /* 0x04 */
} Self_825B6048;

static __forceinline __vector4 LoadFloat3(const Float3_825B6048 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

void fn_825B6048(Self_825B6048 *self, __vector4 *out)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(&self->owner->node->data->position);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    *out = __vsel(v, zero, mask);
}
