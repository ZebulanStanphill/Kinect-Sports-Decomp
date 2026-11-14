typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern unsigned char fn_828E5660(void *stream, float value, int base, int shift);

static __forceinline float GetX(__vector4 v) { return v.vector4_f32[0]; }
static __forceinline float GetY(__vector4 v) { return v.vector4_f32[1]; }
static __forceinline float GetZ(__vector4 v) { return v.vector4_f32[2]; }

unsigned char fn_822CB7F8(void *stream, const __vector4 *v, int baseX, int shiftX, int baseY, int shiftY,
                          int baseZ, int shiftZ)
{
    unsigned char changed;

    changed = fn_828E5660(stream, GetX(*v), baseX, shiftX);
    changed = fn_828E5660(stream, GetY(*v), baseY, shiftY) || changed;
    changed = fn_828E5660(stream, GetZ(*v), baseZ, shiftZ) || changed;
    return changed;
}
