typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec3_822CB730 {
    float x;
    float y;
    float z;
} Vec3_822CB730;

typedef struct Quat_822CB730 {
    float x;
    float y;
    float z;
    float w;
} Quat_822CB730;

extern "C" unsigned __int64 fn_823B4900(void *stream, int bits, unsigned char *overflow, int flags);
extern "C" void fn_822393D0(Vec3_822CB730 *out, void *stream);
extern "C" void fn_8287C410(const Vec3_822CB730 *axis, float angle, Quat_822CB730 *out);

extern "C" __vector4 fn_822CB730(void *stream)
{
    double angle;
    Vec3_822CB730 axis;
    Quat_822CB730 rotation;

    angle = (((double)fn_823B4900(stream, 8, 0, 0) + 0.5) * 0.00390625) * 3.1415927f;
    fn_822393D0(&axis, stream);
    fn_8287C410(&axis, (float)angle, &rotation);
    __vector4 result = __vector4();
    result.vector4_f32[0] = rotation.x;
    result.vector4_f32[1] = rotation.y;
    result.vector4_f32[2] = rotation.z;
    result.vector4_f32[3] = rotation.w;
    return result;
}
