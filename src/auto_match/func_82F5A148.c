// Quaternion slerp with a scalar interpolant (XNA Math XMQuaternionSlerp shape): replicates t
// and forwards to the vector-interpolant version.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);

__vector4 fn_8250D648(__vector4 q0, __vector4 q1, __vector4 t);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

__vector4 fn_82F5A148(__vector4 q0, __vector4 q1, float t)
{
    return fn_8250D648(q0, q1, Replicate(t));
}
