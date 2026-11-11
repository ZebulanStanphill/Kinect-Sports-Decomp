// Getter: copies two float3 values (loaded as vectors, w cleared through the game's reserved
// zero vector v77 and select mask v67) and two floats out of the global lbl_831D3C6C.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_82479778 {
    float x, y, z;
} Float3_82479778;

typedef struct Settings_82479778 {
    Float3_82479778 a;
    Float3_82479778 b;
    float c;
    float d;
} Settings_82479778;

extern Settings_82479778 lbl_831D3C6C;

static __forceinline __vector4 LoadFloat3(const Float3_82479778 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

void fn_82479778(void *self, __vector4 *a, __vector4 *b, float *c, float *d)
{
    __vector4 v;
    v = LoadFloat3(&lbl_831D3C6C.a);
    *a = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    v = LoadFloat3(&lbl_831D3C6C.b);
    *b = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    *c = lbl_831D3C6C.c;
    *d = lbl_831D3C6C.d;
}
