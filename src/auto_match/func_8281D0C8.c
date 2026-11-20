typedef struct Vec3_8281D0C8 {
    float x;
    float y;
    float z;
} Vec3_8281D0C8;

extern void fn_82810B78(const Vec3_8281D0C8 *in, Vec3_8281D0C8 *out);
extern float fn_82810280(const Vec3_8281D0C8 *a, const Vec3_8281D0C8 *b);
extern void fn_82810240(const Vec3_8281D0C8 *a, const Vec3_8281D0C8 *b, Vec3_8281D0C8 *out);
extern float fn_828095F8(float x);

/* Rotation from one direction to another: writes the rotation axis and returns the angle. */
float fn_8281D0C8(const Vec3_8281D0C8 *from, const Vec3_8281D0C8 *to, Vec3_8281D0C8 *axis)
{
    Vec3_8281D0C8 a;
    Vec3_8281D0C8 b;
    float dot;

    fn_82810B78(from, &a);
    fn_82810B78(to, &b);
    dot = fn_82810280(&b, &a);
    if (dot >= 1.0f) {
        axis->x = 1.0f;
        axis->y = 0.0f;
        axis->z = 0.0f;
        return 0.0f;
    }
    if (dot <= -1.0f) {
        Vec3_8281D0C8 xAxis;
        Vec3_8281D0C8 yAxis;

        xAxis.x = 1.0f;
        yAxis.y = 1.0f;
        xAxis.z = 0.0f;
        xAxis.y = 0.0f;
        yAxis.z = 0.0f;
        yAxis.x = 0.0f;
        if (fn_82810280(&a, &xAxis) > 0.5f)
            fn_82810240(&a, &yAxis, axis);
        else
            fn_82810240(&a, &xAxis, axis);
        return 3.14159274f;
    }
    fn_82810240(&b, &a, axis);
    return fn_828095F8(dot);
}
