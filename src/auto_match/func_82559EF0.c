#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const float lbl_821954B0[0xa28 / 4];
extern float fn_82809D40(float y, float x); /* atan2f */

int fn_82559EF0(__vector4 direction, float *pitch, float *yaw)
{
    float x = direction.vector4_f32[0];
    float y = direction.vector4_f32[1];
    float z = direction.vector4_f32[2];
    float epsilon = lbl_821954B0[0x1d0 / 4];
    float zero = 0.0f;
    float length = zero;
    int ok = 1;

    if (fabsf(x) > epsilon || fabsf(z) > epsilon) {
        length = sqrtf(x * x + z * z);
    } else {
        *yaw = zero;
        ok = 0;
        *pitch = zero;
    }
    if (fabsf(x) > epsilon || fabsf(z) > epsilon) {
        *yaw = fn_82809D40(x, z);
    } else {
        *yaw = zero;
        ok = 0;
    }
    if (fabsf(y) > epsilon || fabsf(length) > epsilon) {
        *pitch = fn_82809D40(-y, length);
    } else {
        *pitch = zero;
        ok = 0;
    }
    return ok;
}
