/* Converts a unit quaternion to an axis and an angle in (-pi, pi]; returns
 * the angle and writes the axis, or the x axis and zero when the rotation is
 * (almost) the identity. */
typedef struct Quat_8287C4A0 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
    float w; /* 0xc */
} Quat_8287C4A0;

typedef struct Vector3_8287C4A0 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vector3_8287C4A0;

extern const float lbl_8201E038; /* 0.99999f */
extern const float lbl_82022E6C; /* pi */
extern const float lbl_8315983C; /* 2 pi */

double fabs(double x);
double sqrt(double x);
extern double fn_82F65E18(double x); /* acos */

float fn_8287C4A0(const Quat_8287C4A0 *q, Vector3_8287C4A0 *axis)
{
    float scale;
    float angle;

    if (fabs(q->w) < lbl_8201E038) {
        scale = 1.0f / (float)sqrt(q->x * q->x + q->y * q->y + q->z * q->z);
        axis->x = q->x * scale;
        axis->y = q->y * scale;
        axis->z = q->z * scale;
        angle = (float)fn_82F65E18(q->w) * 2.0f;
        if (angle > lbl_82022E6C) {
            angle -= lbl_8315983C;
        }
        return angle;
    }
    axis->y = 0.0f;
    axis->z = 0.0f;
    axis->x = 1.0f;
    return 0.0f;
}
