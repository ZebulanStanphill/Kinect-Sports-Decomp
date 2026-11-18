typedef struct Vec3_827EC428 {
    float x;
    float y;
    float z;
} Vec3_827EC428;

typedef struct Matrix3_827EC428 {
    float m[3][3];
} Matrix3_827EC428;

extern void fn_82810328(const Vec3_827EC428 *a, const Vec3_827EC428 *b, Vec3_827EC428 *out);
extern void fn_8281CAE8(const Matrix3_827EC428 *rotation, const Vec3_827EC428 *v, Vec3_827EC428 *out);
extern void fn_827EF590(const Vec3_827EC428 *v, Vec3_827EC428 *out);
extern void fn_827EF608(const Vec3_827EC428 *a, const Vec3_827EC428 *b, Vec3_827EC428 *out);
extern float fn_82810308(const Vec3_827EC428 *v);

int fn_827EC428(const Vec3_827EC428 *point, float margin, const Vec3_827EC428 *center,
                const Vec3_827EC428 *radii, const Matrix3_827EC428 *rotation)
{
    Vec3_827EC428 local;
    Vec3_827EC428 extent;
    Vec3_827EC428 inverseExtent;

    extent.x = radii->x + margin;
    extent.y = radii->y + margin;
    extent.z = radii->z + margin;
    fn_82810328(point, center, &local);
    fn_8281CAE8(rotation, &local, &local);
    fn_827EF590(&extent, &inverseExtent);
    fn_827EF608(&inverseExtent, &local, &local);
    return fn_82810308(&local) <= 1.0f;
}
