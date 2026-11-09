typedef struct Vec3_82810A88 {
    float x;
    float y;
    float z;
} Vec3_82810A88;


Vec3_82810A88 fn_82810A88(const Vec3_82810A88 *v, float s)
{
    Vec3_82810A88 r;
    float inv = 1.0f / s;
    r.x = v->x * inv;
    r.y = v->y * inv;
    r.z = v->z * inv;
    return r;
}
