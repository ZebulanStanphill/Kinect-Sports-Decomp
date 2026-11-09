typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

typedef struct Obj_8250EFB0 {
    char pad[0x30];
    float f30;
} Obj_8250EFB0;

extern __vector4 fn_8255AE78(float angle, __vector4 v);

__vector4 *fn_8250EFB0(__vector4 *out, const Obj_8250EFB0 *o, const __vector4 *v)
{
    *out = fn_8255AE78(o->f30, *v);
    return out;
}
