// Interpolates a frame: the base part through fn_823BEB30, then the vector at +0x1a0 as
// self + (other - self) * t.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Frame_82446A38 {
    char pad000[0x1a0];
    __vector4 vector;   // 0x1a0
} Frame_82446A38;

extern void fn_823BEB30(const Frame_82446A38 *self, Frame_82446A38 *out,
                        const Frame_82446A38 *other, float t);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

void fn_82446A38(const Frame_82446A38 *self, Frame_82446A38 *out, const Frame_82446A38 *other,
                 float t)
{
    fn_823BEB30(self, out, other, t);
    out->vector = __vmaddfp(Replicate(t), __vsubfp(other->vector, self->vector), self->vector);
}
