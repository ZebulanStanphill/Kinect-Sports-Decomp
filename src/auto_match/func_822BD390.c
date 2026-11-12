typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrfin(__vector4 v);

extern const __vector4 lbl_82195FE0; /* sine coefficients 0 */
extern const __vector4 lbl_82195FF0; /* sine coefficients 1 */
extern const __vector4 lbl_82196000; /* sine coefficients 2 */
extern const __vector4 lbl_82196070; /* (.., 2pi, .., 1/2pi) */

/* Vector sine: angles reduced to [-pi, pi), then an odd polynomial up to x^23. */
__vector4 fn_822BD390(__vector4 angles)
{
    __vector4 v1, v2, v3, v5, v7, v9, v11, v13, v15, v17, v19, v21, v23;
    __vector4 s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11;
    __vector4 r;

    v1 = __vmulfp(angles, __vspltw(lbl_82196070, 3));
    v1 = __vrfin(v1);
    v1 = __vnmsubfp(__vspltw(lbl_82196070, 1), v1, angles);

    v2 = __vmulfp(v1, v1);
    v3 = __vmulfp(v2, v1);
    v5 = __vmulfp(v3, v2);
    v7 = __vmulfp(v5, v2);
    v9 = __vmulfp(v7, v2);
    v11 = __vmulfp(v9, v2);
    v13 = __vmulfp(v11, v2);
    v15 = __vmulfp(v13, v2);
    v17 = __vmulfp(v15, v2);
    v19 = __vmulfp(v17, v2);
    v21 = __vmulfp(v19, v2);
    v23 = __vmulfp(v21, v2);

    s1 = __vspltw(lbl_82195FE0, 1);
    s2 = __vspltw(lbl_82195FE0, 2);
    s3 = __vspltw(lbl_82195FE0, 3);
    s4 = __vspltw(lbl_82195FF0, 0);
    s5 = __vspltw(lbl_82195FF0, 1);
    s6 = __vspltw(lbl_82195FF0, 2);
    s7 = __vspltw(lbl_82195FF0, 3);
    s8 = __vspltw(lbl_82196000, 0);
    s9 = __vspltw(lbl_82196000, 1);
    s10 = __vspltw(lbl_82196000, 2);
    s11 = __vspltw(lbl_82196000, 3);

    r = __vmaddfp(s1, v3, v1);
    r = __vmaddfp(s2, v5, r);
    r = __vmaddfp(s3, v7, r);
    r = __vmaddfp(s4, v9, r);
    r = __vmaddfp(s5, v11, r);
    r = __vmaddfp(s6, v13, r);
    r = __vmaddfp(s7, v15, r);
    r = __vmaddfp(s8, v17, r);
    r = __vmaddfp(s9, v19, r);
    r = __vmaddfp(s10, v21, r);
    r = __vmaddfp(s11, v23, r);
    return r;
}
