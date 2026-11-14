typedef struct Vec3_8307DAF8 { float x, y, z; } Vec3_8307DAF8;

extern float fn_8306EA78(float angle);

Vec3_8307DAF8 fn_8307DAF8(Vec3_8307DAF8 a, Vec3_8307DAF8 b)
{
    Vec3_8307DAF8 r;
    float z = fn_8306EA78(a.z - b.z);
    float y = fn_8306EA78(a.y - b.y);
    r.x = fn_8306EA78(a.x - b.x);
    r.y = y;
    r.z = z;
    return r;
}
