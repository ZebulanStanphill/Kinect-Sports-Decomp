// Getter: copies two float3 values (loaded as vectors, w cleared through the game's reserved
// zero vector v77 and select mask v67) and two floats out of the global settings block lbl_831D3AB0.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_82478EF8 {
    float x, y, z;
} Float3_82478EF8;

typedef struct Settings_82478EF8 {
    char pad0[0x4c];
    Float3_82478EF8 a;       // 0x4c
    Float3_82478EF8 b;       // 0x58
    float c;                 // 0x64
    float d;                 // 0x68
    char pad6c[0x114];
} Settings_82478EF8;

extern Settings_82478EF8 lbl_831D3AB0;

static __forceinline __vector4 LoadFloat3(const Float3_82478EF8 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

void fn_82478EF8(void *self, __vector4 *a, __vector4 *b, float *c, float *d)
{
    __vector4 v;
    v = LoadFloat3(&lbl_831D3AB0.a);
    *a = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    v = LoadFloat3(&lbl_831D3AB0.b);
    *b = __vsel(v, __VMXGetReg(77), __VMXGetReg(67));
    *c = lbl_831D3AB0.c;
    *d = lbl_831D3AB0.d;
}
