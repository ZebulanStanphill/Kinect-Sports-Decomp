typedef struct Vec3_827E9868 {
    float x;
    float y;
    float z;
} Vec3_827E9868;

extern void fn_82810328(const Vec3_827E9868 *a, const Vec3_827E9868 *b, Vec3_827E9868 *out);
extern float fn_82810280(const Vec3_827E9868 *a, const Vec3_827E9868 *b);
extern float fn_82809CB0(float value);
extern float fn_82809558(float value);
extern int fn_827EE3C0(const Vec3_827E9868 *center, float radius, const Vec3_827E9868 *start,
                       const Vec3_827E9868 *end, float *hitTime);

int fn_827E9868(const Vec3_827E9868 *start, const Vec3_827E9868 *end, const Vec3_827E9868 *capStart,
                const Vec3_827E9868 *capEnd, float radius, float *hitTime)
{
    Vec3_827E9868 axis;
    Vec3_827E9868 direction;
    Vec3_827E9868 offset;
    float md;
    float nd;
    float dd;
    float nn;
    float mn;
    float a;
    float b;
    float c;
    float discriminant;
    float t;

    fn_82810328(capEnd, capStart, &axis);
    fn_82810328(start, capStart, &offset);
    fn_82810328(end, start, &direction);
    md = fn_82810280(&offset, &axis);
    nd = fn_82810280(&direction, &axis);
    dd = fn_82810280(&axis, &axis);
    if (md < 0.0f && nd + md < 0.0f) {
        return fn_827EE3C0(capStart, radius, start, end, hitTime);
    }
    if (md > dd && nd + md > dd) {
        return fn_827EE3C0(capEnd, radius, start, end, hitTime);
    }
    nn = fn_82810280(&direction, &direction);
    mn = fn_82810280(&offset, &direction);
    a = dd * nn - nd * nd;
    c = dd * (fn_82810280(&offset, &offset) - radius * radius) - md * md;
    if (fn_82809CB0(a) < 1e-5f) {
        if (c > 0.0f) {
            return 0;
        }
        if (md < 0.0f) {
            return fn_827EE3C0(capStart, radius, start, end, hitTime);
        }
        if (md > dd) {
            return fn_827EE3C0(capEnd, radius, start, end, hitTime);
        }
        *hitTime = 0.0f;
        return 1;
    }
    b = dd * mn - nd * md;
    discriminant = b * b - a * c;
    if (discriminant < 0.0f) {
        return 0;
    }
    t = (-b - fn_82809558(discriminant)) / a;
    *hitTime = t;
    if (t < 0.0f || t > 1.0f) {
        return 0;
    }
    if (md + t * nd < 0.0f) {
        return fn_827EE3C0(capStart, radius, start, end, hitTime);
    }
    if (md + t * nd > dd) {
        return fn_827EE3C0(capEnd, radius, start, end, hitTime);
    }
    return 1;
}
