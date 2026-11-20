typedef struct Quat_8280DED0 {
    float x;
    float y;
    float z;
    float w;
} Quat_8280DED0;

/* Copies q into out on the same hemisphere as r and returns their clamped dot product. */
float fn_8280DED0(const Quat_8280DED0 *q, const Quat_8280DED0 *r, Quat_8280DED0 *out)
{
    float dot = r->x * q->x + (r->z * q->z + (r->y * q->y + r->w * q->w));

    if (dot < 0.0f) {
        out->x = -q->x;
        out->y = -q->y;
        dot = -dot;
        out->z = -q->z;
        out->w = -q->w;
    } else if (out != q) {
        *out = *q;
    }
    if (dot < 0.0f)
        dot = 0.0f;
    else if (dot > 1.0f)
        dot = 1.0f;
    return dot;
}
