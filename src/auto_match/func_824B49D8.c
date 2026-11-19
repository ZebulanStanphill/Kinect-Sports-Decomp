typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
double fabs(double);
double sqrt(double);

typedef struct Joint_824B49D8 {
    __vector4 position; /* 0x00 */
    __vector4 pad10[3];
} Joint_824B49D8;

typedef struct Skeleton_824B49D8 {
    char pad0[0x40];
    Joint_824B49D8 *joints; /* 0x40 */
} Skeleton_824B49D8;

extern const float lbl_821954B0[0x28a];
extern float fn_82809D40(float y, float x);

void fn_824B49D8(float *angles, Skeleton_824B49D8 *skeleton, int from, int to)
{
    __vector4 direction;
    float x;
    float y;
    float z;
    float horizontal;
    float epsilon;

    angles[2] = 0.0f;
    angles[0] = 0.0f;
    angles[1] = 0.0f;
    direction = __vsubfp(skeleton->joints[from].position, skeleton->joints[to].position);
    epsilon = lbl_821954B0[0x74];
    x = direction.vector4_f32[0];
    y = direction.vector4_f32[1];
    z = direction.vector4_f32[2];
    horizontal = (float)sqrt(x * x + z * z);
    if (fabs(y) > epsilon || fabs(horizontal) > epsilon) {
        angles[0] = fn_82809D40(-y, horizontal);
    }
    horizontal = (float)sqrt(y * y + z * z);
    if (fabs(x) > epsilon || fabs(horizontal) > epsilon) {
        angles[1] = fn_82809D40(x, horizontal);
    }
}
