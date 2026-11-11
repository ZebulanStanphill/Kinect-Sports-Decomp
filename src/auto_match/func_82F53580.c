/* XMVector3Orthogonal-shaped: a vector orthogonal to v (used when two directions are
   opposite). x = (y + z) or (y - z), y/z/w = -x or x, picked by whether y and z have
   the same sign. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vcmpequw(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

__vector4 fn_82F53580(__vector4 v)
{
    __vector4 zero, z, yzyy, negV, signMask, s, d, zNeg, yzyyNeg, select, r0, r1;

    zero = __vspltisw(0);
    z = __vspltw(v, 2);
    yzyy = __vpermwi(v, 0x65);
    signMask = __vspltisw(-1);
    signMask = __vslw(signMask, signMask);
    negV = __vxor(v, signMask);
    zNeg = __vcmpgtfp(zero, z);
    yzyyNeg = __vcmpgtfp(zero, yzyy);
    s = __vaddfp(yzyy, z);
    d = __vsubfp(yzyy, z);
    select = __vcmpequw(zNeg, yzyyNeg);
    r0 = __vrlimi(__vspltw(negV, 0), s, 8, 0);
    r1 = __vrlimi(__vspltw(v, 0), d, 8, 0);
    return __vsel(r1, r0, select);
}
