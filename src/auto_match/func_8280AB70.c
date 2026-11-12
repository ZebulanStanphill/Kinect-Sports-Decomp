typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrfin(__vector4 v);

extern const __vector4 lbl_82196010; /* cosine coefficients 0 */
extern const __vector4 lbl_82196020; /* cosine coefficients 1 */
extern const __vector4 lbl_82196030; /* cosine coefficients 2 */
extern const __vector4 lbl_82196070; /* (.., 2pi, .., 1/2pi) */

/* Vector cosine: angles reduced to [-pi, pi), then an even polynomial up to x^22. */
__vector4 fn_8280AB70(__vector4 angles)
{
    __vector4 v1, v2, v4, v6, v8, v10, v12, v14, v16, v18, v20, v22;
    __vector4 c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11;
    __vector4 r;

    v1 = __vmulfp(angles, __vspltw(lbl_82196070, 3));
    v1 = __vrfin(v1);
    v1 = __vnmsubfp(__vspltw(lbl_82196070, 1), v1, angles);

    v2 = __vmulfp(v1, v1);
    v4 = __vmulfp(v2, v2);
    v6 = __vmulfp(v4, v2);
    v8 = __vmulfp(v4, v4);
    v10 = __vmulfp(v6, v4);
    v12 = __vmulfp(v6, v6);
    v14 = __vmulfp(v8, v6);
    v16 = __vmulfp(v8, v8);
    v18 = __vmulfp(v10, v8);
    v20 = __vmulfp(v10, v10);
    v22 = __vmulfp(v12, v10);

    c1 = __vspltw(lbl_82196010, 1);
    c2 = __vspltw(lbl_82196010, 2);
    c3 = __vspltw(lbl_82196010, 3);
    c4 = __vspltw(lbl_82196020, 0);
    c5 = __vspltw(lbl_82196020, 1);
    c6 = __vspltw(lbl_82196020, 2);
    c7 = __vspltw(lbl_82196020, 3);
    c8 = __vspltw(lbl_82196030, 0);
    c9 = __vspltw(lbl_82196030, 1);
    c10 = __vspltw(lbl_82196030, 2);
    c11 = __vspltw(lbl_82196030, 3);

    r = __vmaddfp(c1, v2, __vspltw(__vupkd3d(__vspltisw(0), 1), 3));
    r = __vmaddfp(c2, v4, r);
    r = __vmaddfp(c3, v6, r);
    r = __vmaddfp(c4, v8, r);
    r = __vmaddfp(c5, v10, r);
    r = __vmaddfp(c6, v12, r);
    r = __vmaddfp(c7, v14, r);
    r = __vmaddfp(c8, v16, r);
    r = __vmaddfp(c9, v18, r);
    r = __vmaddfp(c10, v20, r);
    r = __vmaddfp(c11, v22, r);
    return r;
}
