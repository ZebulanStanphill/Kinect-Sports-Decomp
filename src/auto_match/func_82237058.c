typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Quant_82237058 { int base; int shift; } Quant_82237058;
typedef struct Self_82237058 { int f0; int f4; Quant_82237058 q[3]; } Self_82237058;

extern unsigned char fn_828E5660(void *stream, float value, int base, int shift);

static __forceinline float GetX(__vector4 v) { return v.vector4_f32[0]; }
static __forceinline float GetY(__vector4 v) { return v.vector4_f32[1]; }
static __forceinline float GetZ(__vector4 v) { return v.vector4_f32[2]; }

void fn_82237058(Self_82237058 *self, void *stream, const __vector4 *v)
{
    fn_828E5660(stream, GetX(*v), self->q[0].base, self->q[0].shift);
    fn_828E5660(stream, GetY(*v), self->q[1].base, self->q[1].shift);
    fn_828E5660(stream, GetZ(*v), self->q[2].base, self->q[2].shift);
}
