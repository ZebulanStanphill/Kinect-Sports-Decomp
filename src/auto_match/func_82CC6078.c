typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);

extern void fn_82CC5DC8(void *p, int a, __vector4 v);

void fn_82CC6078(void *self, void *p)
{
    fn_82CC5DC8(p, 0, __vspltish(1));
}
