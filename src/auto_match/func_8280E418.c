typedef struct Quat_8280E418 {
    float x;
    float y;
    float z;
    float w;
} Quat_8280E418;

extern int fn_8280A5E8(float x);
extern float fn_8280A550(float x);

void fn_8280E418(const Quat_8280E418 *q, Quat_8280E418 *out)
{
    float x2 = q->x * q->x;
    float y2 = q->y * q->y;
    float z2 = q->z * q->z;
    float w2 = q->w * q->w;
    float lengthSq = x2 + y2 + z2 + w2;

    if (fn_8280A5E8(lengthSq - 1.0f) == 0) {
        float scale = fn_8280A550(lengthSq);
        out->x = q->x * scale;
        out->y = q->y * scale;
        out->z = q->z * scale;
        out->w = scale * q->w;
    } else if (q != out) {
        out->x = q->x;
        out->y = q->y;
        out->z = q->z;
        out->w = q->w;
    }
}
