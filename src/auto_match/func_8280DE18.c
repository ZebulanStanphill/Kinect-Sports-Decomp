typedef struct Quat_8280DE18 {
    float x;
    float y;
    float z;
    float w;
} Quat_8280DE18;

extern float fn_828095F8(float x);
extern float fn_8280A550(float x);

void fn_8280DE18(const Quat_8280DE18 *q, Quat_8280DE18 *out)
{
    float x2 = q->x * q->x;
    float y2 = q->y * q->y;
    float z2 = q->z * q->z;
    float scale = x2 + y2 + z2;

    if (scale > 0.0f) {
        float angle = fn_828095F8(q->w);
        scale = fn_8280A550(scale) * angle;
    }
    out->w = 0.0f;
    out->x = scale * q->x;
    out->y = scale * q->y;
    out->z = scale * q->z;
}
