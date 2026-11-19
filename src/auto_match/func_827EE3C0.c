typedef struct Vec3_827EE3C0 {
    float x;
    float y;
    float z;
} Vec3_827EE3C0;

extern void fn_82810328(const Vec3_827EE3C0 *a, const Vec3_827EE3C0 *b, Vec3_827EE3C0 *out);
extern float fn_82810280(const Vec3_827EE3C0 *a, const Vec3_827EE3C0 *b);
extern float fn_82809558(float value);

int fn_827EE3C0(const Vec3_827EE3C0 *center, float radius, const Vec3_827EE3C0 *start,
                const Vec3_827EE3C0 *end, float *hitTime)
{
    Vec3_827EE3C0 offset;
    Vec3_827EE3C0 direction;
    float a;
    float b;
    float c;
    float distance;
    float discriminant;
    float t;

    fn_82810328(start, center, &offset);
    fn_82810328(end, start, &direction);
    a = fn_82810280(&direction, &direction);
    distance = fn_82810280(&offset, &offset);
    if (a == 0.0f) {
        if (distance > radius * radius) {
            return 0;
        }
        *hitTime = 0.0f;
        return 1;
    }
    b = fn_82810280(&offset, &direction);
    c = distance - radius * radius;
    if (c > 0.0f && b > 0.0f) {
        return 0;
    }
    discriminant = b * b - c * a;
    if (discriminant < 0.0f) {
        return 0;
    }
    t = (-b - fn_82809558(discriminant)) / a;
    *hitTime = t;
    if (t > 1.0f) {
        return 0;
    }
    *hitTime = t >= 0.0f ? t : 0.0f;
    return 1;
}
