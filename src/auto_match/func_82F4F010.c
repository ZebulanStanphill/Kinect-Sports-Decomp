typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 fn_82F59F48(__vector4 a, __vector4 b);
extern __vector4 fn_82F59D58(__vector4 v, __vector4 q);
extern __vector4 fn_82F59E08(__vector4 v);

__vector4 fn_82F4F010(__vector4 a, __vector4 b, __vector4 c, __vector4 d)
{
    return fn_82F59E08(fn_82F59F48(fn_82F59D58(c, fn_82F59F48(b, a)), d));
}
