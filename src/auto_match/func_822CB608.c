typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Quat_822CB608 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
    float w; /* 0xc */
} Quat_822CB608;

typedef struct Vector3_822CB608 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vector3_822CB608;

extern float fn_8287C4A0(const Quat_822CB608 *q, Vector3_822CB608 *axis);
extern void fn_8223C478(void *writer, int bits, int flags);
extern int fn_828E9F18(void *writer, unsigned __int64 value, int bits);
extern void fn_822CB8B0(void *writer, Vector3_822CB608 *axis);
extern float lbl_831D1430;

static __forceinline float GetX_822CB608(__vector4 v)
{
    return v.vector4_f32[0];
}

static __forceinline float GetY_822CB608(__vector4 v)
{
    return v.vector4_f32[1];
}

static __forceinline float GetZ_822CB608(__vector4 v)
{
    return v.vector4_f32[2];
}

static __forceinline float GetW_822CB608(__vector4 v)
{
    return v.vector4_f32[3];
}

void fn_822CB608(void *writer, const __vector4 *rotation)
{
    Quat_822CB608 q;
    Vector3_822CB608 axis;
    double angle;
    unsigned __int64 quantised;

    q.w = GetW_822CB608(*rotation);
    q.z = GetZ_822CB608(*rotation);
    q.y = GetY_822CB608(*rotation);
    q.x = GetX_822CB608(*rotation);
    angle = fn_8287C4A0(&q, &axis);
    if (angle < 0.0) {
        angle = lbl_831D1430 + angle;
    }
    if (angle >= 3.1415927f) {
        angle = lbl_831D1430 - angle;
        axis.x = -axis.x;
        axis.y = -axis.y;
        axis.z = -axis.z;
    }
    angle = angle * (1.0 / 3.1415927f);
    quantised = (__int64)(angle * 256.0);
    if (quantised == 0x100) {
        quantised = 0xff;
    }
    fn_8223C478(writer, 8, 0);
    fn_828E9F18(writer, quantised, 8);
    fn_822CB8B0(writer, &axis);
}
