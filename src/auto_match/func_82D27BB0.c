typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern void fn_82D27010(void *self, void *arg, const __vector4 *scale);

void fn_82D27BB0(void *self, void *arg)
{
    __vector4 scale = { 1.0f, 1.0f, 1.0f, 0.0f };
    fn_82D27010(self, arg, &scale);
}
