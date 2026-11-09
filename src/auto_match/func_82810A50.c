/* Vector3 /= scalar via the reciprocal. The 1.0f is the pooled constant __real@3f800000;
   reading it through an extern declaration instead swaps the y/z fmuls operands (98.46%). */
typedef struct Vec3_82810A50 {
    float x;
    float y;
    float z;
} Vec3_82810A50;

void fn_82810A50(Vec3_82810A50 *v, float s)
{
    float inv = 1.0f / s;
    v->x *= inv;
    v->y *= inv;
    v->z *= inv;
}
