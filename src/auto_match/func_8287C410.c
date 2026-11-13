typedef struct Vec3_8287C410 {
    float x;
    float y;
    float z;
} Vec3_8287C410;

typedef struct Quat_8287C410 {
    float x;
    float y;
    float z;
    float w;
} Quat_8287C410;

extern double fn_82F64318(double x); /* sin */
extern double fn_82F643F8(double x); /* cos */

void fn_8287C410(const Vec3_8287C410 *axis, float angle, Quat_8287C410 *out)
{
    float halfAngle = 0.5f * angle;
    float s = (float)fn_82F64318(halfAngle);

    out->w = (float)fn_82F643F8(halfAngle);
    out->x = axis->x * s;
    out->y = axis->y * s;
    out->z = axis->z * s;
}
