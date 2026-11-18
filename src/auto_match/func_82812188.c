typedef struct Vec3_82812188 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vec3_82812188;

typedef struct Sphere_82812188 {
    Vec3_82812188 center; /* 0x0 */
    float radius;         /* 0xc */
} Sphere_82812188;

extern void fn_82810360(const Vec3_82812188 *src, Vec3_82812188 *dst);
extern float fn_82810B40(const Vec3_82812188 *a, const Vec3_82812188 *b);
extern void fn_82810328(Vec3_82812188 *a, Vec3_82812188 *b, Vec3_82812188 *out);
extern void fn_828102A8(Vec3_82812188 *source, Vec3_82812188 *output, float scale);
extern void fn_82810208(Vec3_82812188 *a, Vec3_82812188 *b, Vec3_82812188 *out);

void fn_82812188(Sphere_82812188 *a, Sphere_82812188 *b, Sphere_82812188 *out)
{
    Vec3_82812188 centerA;
    Vec3_82812188 centerB;
    Vec3_82812188 direction;
    Vec3_82812188 merged;
    Vec3_82812188 *center;
    float radiusA;
    float radiusB;
    float distance;
    float reach;

    fn_82810360(&a->center, &centerA);
    fn_82810360(&b->center, &centerB);
    radiusA = a->radius;
    radiusB = b->radius;
    distance = fn_82810B40(&centerA, &centerB);
    reach = distance + radiusB;
    if (reach <= radiusA) {
        out->radius = radiusA;
        center = &centerA;
    } else if (distance + radiusA <= radiusB) {
        out->radius = radiusB;
        center = &centerB;
    } else {
        fn_82810328(&centerB, &centerA, &direction);
        fn_828102A8(&direction, &merged, ((reach - radiusA) * 0.5f) / distance);
        fn_82810208(&centerA, &merged, &merged);
        out->radius = (reach + radiusA) * 0.5f;
        center = &merged;
    }
    fn_82810360(center, &out->center);
}
