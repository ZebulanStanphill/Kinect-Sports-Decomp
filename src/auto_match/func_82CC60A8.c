typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);

extern void fn_82CC5DC8(void *a, void *b, void *c, int d, int e, int f, __vector4 v);

void fn_82CC60A8(void *self, void *a, void *c, int d, int e, int f)
{
    fn_82CC5DC8(a, 0, c, d, e, f, __vspltisw(0));
}
