typedef struct Vec3_82812050 {
    float x, y, z;
} Vec3_82812050;

typedef struct Quat_82812050 {
    Vec3_82812050 v;
    float w;
} Quat_82812050;

void fn_82812050(Quat_82812050 *dst, const Quat_82812050 *src)
{
    dst->w = src->w;
    dst->v = src->v;
}
