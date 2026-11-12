/* Linear blend of two D3DCOLORs: both unpacked with XMLoadColor (unaligned lvsl form), red,
   green and blue interpolated by t on the FPU, alpha cleared, packed again with XMStoreColor. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvsl(const void *base, int offset);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vperm(__vector4 a, __vector4 b, __vector4 control);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vpkd3d(__vector4 d, __vector4 v, int type, int mask, int shift);
void __stvewx(__vector4 v, void *base, int offset);

extern const __vector4 lbl_821CC0C0;     /* four -32896.5 (unpack offset) */
extern const __vector4 lbl_821CC0D0;     /* four 32896.5 (unpack scale) */
extern const __vector4 lbl_820ECE40;     /* four -255/2^22 (pack scale) */

static __forceinline __vector4 LoadColor(const unsigned int *source)
{
    __vector4 lo, hi, permute, v;

    permute = __lvsl(source, 0);
    hi = *(const __vector4 *)((const char *)source + 3);
    lo = *(const __vector4 *)source;
    permute = __vsldoi(permute, permute, 1 << 2);
    v = __vperm(lo, hi, permute);
    v = __vupkd3d(v, 0);
    v = __vmaddfp(lbl_821CC0D0, v, lbl_821CC0C0);
    return __vpermwi(v, 198);
}

static __forceinline void StoreColor(unsigned int *destination, __vector4 v)
{
    __vector4 three, n;

    three = __vspltisw(3);
    three = __vcfsx(three, 0);
    n = __vpermwi(v, 108);
    n = __vnmsubfp(n, lbl_820ECE40, three);
    n = __vpkd3d(n, n, 0, 1, 3);
    n = __vspltw(n, 0);
    __stvewx(n, destination, 0);
}

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);

    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

unsigned int fn_824E6C20(unsigned int from, unsigned int to, float t)
{
    unsigned int c0 = from;
    unsigned int c1 = to;
    __vector4 a = LoadColor(&c0);
    __vector4 b = LoadColor(&c1);
    unsigned int result;

    StoreColor(&result, VectorSet(a.vector4_f32[0] + (b.vector4_f32[0] - a.vector4_f32[0]) * t,
                                  a.vector4_f32[1] + (b.vector4_f32[1] - a.vector4_f32[1]) * t,
                                  a.vector4_f32[2] + (b.vector4_f32[2] - a.vector4_f32[2]) * t, 0.0f));
    return result;
}
