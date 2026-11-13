typedef struct Vec3_8307DA38 { float x, y, z; } Vec3_8307DA38;

Vec3_8307DA38 fn_8307DA38(Vec3_8307DA38 v, float s)
{
    Vec3_8307DA38 r;
    r.x = v.x * s;
    r.y = v.y * s;
    r.z = v.z * s;
    return r;
}
