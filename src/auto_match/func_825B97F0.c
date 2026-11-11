// Adds amount along a rotated axis (0: y, 1: x, 2: z; fn_8255ABF8 rotates) to a vector, or for axis 3
// adds it to y directly. Needs the pool alias __real@00000000=ltcg_pool_0_0f.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vaddfp(__vector4 a, __vector4 b);

__vector4 fn_8255ABF8(const void *rotation, __vector4 v);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

void fn_825B97F0(unsigned int axis, __vector4 *value, const void *rotation, float amount)
{
    switch (axis) {
    case 0:
        *value = __vaddfp(*value, fn_8255ABF8(rotation, VectorSet(0.0f, amount, 0.0f, 0.0f)));
        break;
    case 1:
        *value = __vaddfp(*value, fn_8255ABF8(rotation, VectorSet(amount, 0.0f, 0.0f, 0.0f)));
        break;
    case 2:
        *value = __vaddfp(*value, fn_8255ABF8(rotation, VectorSet(0.0f, 0.0f, amount, 0.0f)));
        break;
    case 3:
        value->vector4_f32[1] = amount + value->vector4_f32[1];
        break;
    }
}
