typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vrfin(__vector4 v);
__vector4 __vrfiz(__vector4 v);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

extern const __vector4 lbl_821CC0F0;
extern const __vector4 lbl_821CC100;
extern const __vector4 lbl_821CC110;

__vector4 fn_8263E058(__vector4 v)
{
    __vector4 q, k, r0, r1, r2, r3, m0, m1, m2, r;

    q = __vrfin(__vmulfp(v, __vspltw(lbl_821CC100, 0)));
    k = __vspltw(lbl_821CC0F0, 3);
    r0 = __vmulfp(q, k);
    r1 = __vmaddfp(__vrfiz(__vmulfp(q, __vspltw(lbl_821CC100, 1))), k, __vspltw(lbl_821CC110, 1));
    r2 = __vmaddfp(__vrfiz(__vmulfp(q, __vspltw(lbl_821CC100, 2))), k, __vspltw(lbl_821CC110, 2));
    r3 = __vmaddfp(__vrfiz(__vmulfp(q, __vspltw(lbl_821CC100, 3))), k, __vspltw(lbl_821CC110, 3));
    m0 = __vcmpgtfp(__vspltw(lbl_821CC0F0, 0), v);
    m1 = __vcmpgtfp(__vspltw(lbl_821CC0F0, 1), v);
    m2 = __vcmpgtfp(__vspltw(lbl_821CC0F0, 2), v);
    r = __vsel(r3, r2, m2);
    r = __vsel(r, r1, m1);
    r = __vsel(r, r0, m0);
    return __vrlimi(r, v, 1, 0);
}
