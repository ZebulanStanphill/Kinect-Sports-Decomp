#include "xdk/vectorintrinsics.h"

double sqrt(double);

typedef struct Angles_82366B40 {
    float pitch; /* 0x0 */
    float yaw;   /* 0x4 */
    float roll;  /* 0x8 */
} Angles_82366B40;

extern const Angles_82366B40 lbl_821CA1A0;
extern double fn_82F65018(double y, double x);

Angles_82366B40 fn_82366B40(__vector4 from, __vector4 to)
{
    Angles_82366B40 angles = lbl_821CA1A0;
    __vector4 delta = __vsubfp(to, from);
    float x = delta.vector4_f32[0];
    float z = delta.vector4_f32[2];

    angles.yaw = (float)fn_82F65018(-x, -z);
    angles.pitch = (float)fn_82F65018(delta.vector4_f32[1], sqrt(x * x + z * z));
    return angles;
}
