typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

__vector4 __vaddfp(__vector4, __vector4);

void fn_83075DB8(char *self, int index, __vector4 amount)
{
    __vector4 *v = (__vector4 *)(self + index * 32);
    *v = __vaddfp(*v, amount);
}
