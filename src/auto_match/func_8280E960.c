/* Converts a unit quaternion to an axis and an angle in (-pi, pi]; returns
 * the angle and writes the axis, or the x axis and zero when the rotation is
 * (almost) the identity. */
typedef struct Quat_8280E960 {
    float x;
    float y;
    float z;
    float w;
} Quat_8280E960;

typedef struct Vector3_8280E960 {
    float x;
    float y;
    float z;
} Vector3_8280E960;

extern float fn_82809CB0(float value); /* fabsf */
extern float fn_8280A550(float x);     /* reciprocal square root */
extern float fn_828095F8(float x);     /* acosf */

float fn_8280E960(const Quat_8280E960 *q, Vector3_8280E960 *axis)
{
    float scale;
    float angle;

    if (fn_82809CB0(q->w) < 0.99999f) {
        scale = fn_8280A550(q->x * q->x + q->y * q->y + q->z * q->z);
        axis->x = q->x * scale;
        axis->y = scale * q->y;
        axis->z = scale * q->z;
        angle = fn_828095F8(q->w) * 2.0f;
        if (angle > 3.1415927f) {
            angle -= 6.2831855f;
        }
        return angle;
    }
    axis->x = 1.0f;
    axis->y = 0.0f;
    axis->z = 0.0f;
    return 0.0f;
}
