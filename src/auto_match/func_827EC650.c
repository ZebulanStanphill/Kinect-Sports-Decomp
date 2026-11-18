typedef struct Vec3_827EC650 {
    float x;
    float y;
    float z;
} Vec3_827EC650;

extern float fn_82810308(const Vec3_827EC650 *v);
extern float fn_82810280(const Vec3_827EC650 *a, const Vec3_827EC650 *b);
extern void fn_828102A8(const Vec3_827EC650 *v, Vec3_827EC650 *out, float scale);
extern void fn_82810590(const Vec3_827EC650 *a, const Vec3_827EC650 *b, float t, Vec3_827EC650 *out);

int fn_827EC650(const Vec3_827EC650 *point, const Vec3_827EC650 *axis)
{
    float t;
    float axisLengthSq;
    Vec3_827EC650 offset;

    t = fn_82810308(point) - fn_82810280(point, axis);
    if (t < 0.0f) {
        if (fn_82810308(point) > 1.0f) {
            return 0;
        }
        return 1;
    } else {
        axisLengthSq = fn_82810308(axis);
        if (t < axisLengthSq) {
            fn_828102A8(point, &offset, -axisLengthSq);
            fn_82810590(axis, &offset, t, &offset);
            if (fn_82810308(&offset) > axisLengthSq * axisLengthSq) {
                return 0;
            }
            return 1;
        } else {
            return fn_82810308(axis) <= 1.0f;
        }
    }
}
