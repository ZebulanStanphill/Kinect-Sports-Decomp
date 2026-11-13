typedef struct { float x, y, z; } Vec3_82810A28;

Vec3_82810A28 fn_82810A28(const Vec3_82810A28 *v, float s)
{
    Vec3_82810A28 r;
    r.x = v->x * s;
    r.y = v->y * s;
    r.z = v->z * s;
    return r;
}
