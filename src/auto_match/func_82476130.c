// Getter: two float3 members of the sub-object at +0x10 widened to vectors (w cleared through the
// reserved zero vector v77 and select mask v67), then two floats.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_82476130 {
    float x, y, z;
} Float3_82476130;

static __forceinline __vector4 LoadFloat3(const Float3_82476130 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}
typedef struct Sub_82476130 {
    char pad0[0x28];
    Float3_82476130 a;     // 0x28
    Float3_82476130 b;     // 0x34
} Sub_82476130;

typedef struct Obj_82476130 {
    char pad0[0x10];
    Sub_82476130 sub;      // 0x10
    float c;               // 0x50
    float d;               // 0x54
} Obj_82476130;

void fn_82476130(Obj_82476130 *self, __vector4 *a, __vector4 *b, float *c, float *d)
{
    Sub_82476130 *s = &self->sub;
    __vector4 v;
    v = LoadFloat3(&s->a);
    *a = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    v = LoadFloat3(&s->b);
    *b = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    *c = self->c;
    *d = self->d;
}
