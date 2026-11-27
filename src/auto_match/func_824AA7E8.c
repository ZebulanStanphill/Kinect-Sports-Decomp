#include "xdk/vectorintrinsics.h"

double fabs(double);
double sqrt(double);

typedef struct Vec3_824AA7E8 {
    float x;
    float y;
    float z;
} Vec3_824AA7E8;

typedef struct Joint_824AA7E8 {
    __vector4 position; /* 0x00 */
    __vector4 pad10[3];
} Joint_824AA7E8;

typedef struct Skeleton_824AA7E8 {
    char pad0[0x40];
    Joint_824AA7E8 *joints; /* 0x40 */
} Skeleton_824AA7E8;

extern const Vec3_824AA7E8 lbl_821CA1A0;
extern const float lbl_821954B0[0x28a];
extern float fn_82809D40(float y, float x);

Vec3_824AA7E8 fn_824AA7E8(Skeleton_824AA7E8 *skeleton, int from, int to)
{
    Vec3_824AA7E8 angles;
    __vector4 direction;
    float x;
    float y;
    float z;
    float horizontal;
    float epsilon;

    direction = __vsubfp(skeleton->joints[from].position, skeleton->joints[to].position);
    epsilon = lbl_821954B0[0x74];
    angles = lbl_821CA1A0;
    x = direction.vector4_f32[0];
    y = direction.vector4_f32[1];
    z = direction.vector4_f32[2];
    horizontal = (float)sqrt(x * x + z * z);
    if (fabs(y) > epsilon || fabs(horizontal) > epsilon) {
        angles.x = fn_82809D40(-y, horizontal);
    }
    horizontal = (float)sqrt(y * y + z * z);
    if (fabs(x) > epsilon || fabs(horizontal) > epsilon) {
        angles.y = fn_82809D40(x, horizontal);
    }
    return angles;
}
