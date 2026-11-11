// Returns the position (float3 at +0xc of the object the owner's component returns from its
// virtual slot 3) as a vector, w cleared through the game's reserved zero vector v77 and
// select mask v67.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_825600A8 {
    float x, y, z;
} Float3_825600A8;

typedef struct Node_825600A8 {
    char pad00[0xc];
    Float3_825600A8 position;   // 0x0c
} Node_825600A8;

typedef struct Component_825600A8 Component_825600A8;

typedef struct ComponentVtbl_825600A8 {
    void *slot0;
    void *slot1;
    void *slot2;
    Node_825600A8 *(*getNode)(Component_825600A8 *self);
} ComponentVtbl_825600A8;

struct Component_825600A8 {
    const ComponentVtbl_825600A8 *vt;
};

typedef struct Owner_825600A8 {
    char pad000[0x1b4];
    Component_825600A8 *component;   // 0x1b4
} Owner_825600A8;

typedef struct Self_825600A8 {
    char pad000[0x8c0];
    Owner_825600A8 *owner;           // 0x8c0
} Self_825600A8;

static __forceinline __vector4 LoadFloat3(const Float3_825600A8 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

__vector4 fn_825600A8(Self_825600A8 *self)
{
    Component_825600A8 *component = self->owner->component;
    __vector4 v;

    __vector4 zero, mask;
    v = LoadFloat3(&component->vt->getNode(component)->position);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}
