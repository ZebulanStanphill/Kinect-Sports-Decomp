typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

// Zero `count` hkVector4s (setZero4: v ^ v); the first two parameters are unused here.
void fn_82D3C580(void *a, void *b, int count, __vector4 *dst)
{
    int i;
    for (i = count - 1; i >= 0; i--) {
        SetZero(dst);
        dst++;
    }
}
