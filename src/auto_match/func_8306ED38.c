typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);

__vector4 fn_8306ED38(__vector4 v, float s)
{
    __vector4 t;
    t.vector4_f32[3] = s;
    t.vector4_f32[2] = s;
    t.vector4_f32[1] = s;
    t.vector4_f32[0] = s;
    return __vmulfp(v, t);
}
