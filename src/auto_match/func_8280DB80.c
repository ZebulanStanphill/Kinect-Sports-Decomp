typedef struct Quat_8280DB80 {
    float x;
    float y;
    float z;
    float w;
} Quat_8280DB80;

extern float fn_8280A550(float x); /* 1 / sqrt(x) */
extern void fn_8280A668(float angle, float *s, float *c); /* sincos */

/* Quaternion exponential of the vector part of v. */
void fn_8280DB80(const Quat_8280DB80 *v, Quat_8280DB80 *out)
{
    float x2 = v->x * v->x;
    float y2 = v->y * v->y;
    float z2 = v->z * v->z;
    float lenSq = x2 + y2 + z2;

    if (lenSq > 1e-05f) {
        float invLen = fn_8280A550(lenSq);
        float s;
        float scale;

        fn_8280A668(invLen * lenSq, &s, &out->w);
        scale = s * invLen;
        out->x = v->x * scale;
        out->y = v->y * scale;
        out->z = scale * v->z;
    } else {
        out->w = 1.0f;
        out->x = v->x;
        out->y = v->y;
        out->z = v->z;
    }
}
