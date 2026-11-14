typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vslo(__vector4 a, __vector4 b);
__vector4 __vsl(__vector4 a, __vector4 b);
__vector4 __vsubuwm(__vector4 a, __vector4 b);

__vector4 fn_82803398(__vector4 shift, __vector4 v)
{
    return __vsubuwm(__vsl(__vslo(v, shift), shift), v);
}
