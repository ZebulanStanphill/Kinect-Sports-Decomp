typedef struct Vec3_827E9A68 {
    float x;
    float y;
    float z;
} Vec3_827E9A68;

extern const float lbl_820069B4;
extern int lbl_831F13B4;

extern void fn_82810328(const Vec3_827E9A68 *a, const Vec3_827E9A68 *b, Vec3_827E9A68 *out);
extern float fn_82810308(const Vec3_827E9A68 *v);
extern float fn_82810280(const Vec3_827E9A68 *a, const Vec3_827E9A68 *b);
extern float fn_82809558(float value);

int fn_827E9A68(const Vec3_827E9A68 *origin, const Vec3_827E9A68 *velocity, const Vec3_827E9A68 *center,
                float radius, const Vec3_827E9A68 *otherVelocity, float maxTime, float *hitTime)
{
    Vec3_827E9A68 offset;
    Vec3_827E9A68 direction;
    float a;
    float b;
    float c;
    float discriminant;
    float t;

    fn_82810328(origin, center, &offset);
    fn_82810328(velocity, otherVelocity, &direction);
    a = fn_82810308(&direction);
    c = fn_82810308(&offset) - radius * radius;
    if (a < lbl_820069B4) {
        if (c <= 0.0f) {
            *hitTime = 0.0f;
            return 1;
        }
        return 0;
    }
    b = fn_82810280(&offset, &direction);
    if (b > 0.0f && c > 0.0f) {
        return 0;
    }
    discriminant = b * b - c * a;
    if (discriminant < 0.0f) {
        return 0;
    }
    t = a * maxTime + b;
    if (t < 0.0f && t * t > discriminant) {
        return 0;
    }
    t = -((fn_82809558(discriminant) + b) / a);
    if (lbl_831F13B4 != 0 && t < 0.0f) {
        return 0;
    }
    *hitTime = t;
    return 1;
}
