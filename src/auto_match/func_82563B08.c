typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern void fn_822E83E0(void *self, const __vector4 *v);
extern void fn_8240DEC0(void *self, const __vector4 *v);

void fn_82563B08(void *self, __vector4 a, __vector4 b)
{
    __vector4 ta = a;
    __vector4 tb;
    fn_822E83E0(self, &ta);
    tb = b;
    fn_8240DEC0(self, &tb);
}
