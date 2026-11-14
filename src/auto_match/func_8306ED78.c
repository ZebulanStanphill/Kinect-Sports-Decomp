typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);

/* Cross product: a.yzx * b.zxy - a.zxy * b.yzx. */
__vector4 fn_8306ED78(__vector4 a, __vector4 b)
{
    return __vnmsubfp(__vpermwi(a, 135), __vpermwi(b, 99), __vmulfp(__vpermwi(a, 99), __vpermwi(b, 135)));
}
