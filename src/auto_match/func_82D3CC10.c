typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

void fn_82D3CC10(void *self, __vector4 *v)
{
    *v = __vxor(*v, *v);
}
