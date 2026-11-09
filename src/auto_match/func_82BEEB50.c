typedef struct Vec3 { float x, y, z; } Vec3;
extern float lbl_82002AE0;

Vec3 fn_82BEEB50(const Vec3 *v, float s)
{
    Vec3 r;
    float inv = lbl_82002AE0 / s;
    r.x = v->x * inv;
    r.y = v->y * inv;
    r.z = v->z * inv;
    return r;
}
