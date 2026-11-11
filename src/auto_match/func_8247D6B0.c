// Getter: copies two float3 values (loaded as vectors, w cleared through the game's reserved
// zero vector v77 and select mask v67) and two floats out of the global lbl_831D3CF0.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_8247D6B0 {
    float x, y, z;
} Float3_8247D6B0;

typedef struct Settings_8247D6B0 {
    Float3_8247D6B0 a;
    Float3_8247D6B0 b;
    char pad18[0x44];
    float c;    // 0x5C
    float d;    // 0x60
    char pad64[0x4];
} Settings_8247D6B0;

extern Settings_8247D6B0 lbl_831D3CF0;

static __forceinline __vector4 LoadFloat3(const Float3_8247D6B0 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

void fn_8247D6B0(void *self, __vector4 *a, __vector4 *b, float *c, float *d)
{
    __vector4 v;
    v = LoadFloat3(&lbl_831D3CF0.a);
    *a = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    v = LoadFloat3(&lbl_831D3CF0.b);
    *b = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    *c = lbl_831D3CF0.c;
    *d = lbl_831D3CF0.d;
}
