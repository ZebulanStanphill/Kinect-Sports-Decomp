typedef struct Vec3_8307DA68 { float x, y, z; } Vec3_8307DA68;

extern float fn_8306EA78(float angle);

Vec3_8307DA68 fn_8307DA68(Vec3_8307DA68 a, Vec3_8307DA68 b)
{
    Vec3_8307DA68 r;
    float z = fn_8306EA78(a.z + b.z);
    float y = fn_8306EA78(a.y + b.y);
    r.x = fn_8306EA78(a.x + b.x);
    r.y = y;
    r.z = z;
    return r;
}
