typedef struct Vec3_827EE128 {
    float x;
    float y;
    float z;
} Vec3_827EE128;

extern int lbl_831F13C0;
extern float fn_82809558(float value);
extern float fn_8280A5D8(float value);
extern void fn_82810558(const Vec3_827EE128 *direction, const Vec3_827EE128 *origin, float t,
                        Vec3_827EE128 *out);
extern void fn_82810B78(Vec3_827EE128 *out, const Vec3_827EE128 *in);

int fn_827EE128(const Vec3_827EE128 *origin, const Vec3_827EE128 *direction, float a, float c, float halfB,
                float radiusTerm, float maxT, float *bestT, Vec3_827EE128 *hitNormal)
{
    float zero = 0.0f;
    float discriminant;
    float t;

    discriminant = halfB * halfB - (c - radiusTerm) * a;
    if (discriminant >= zero) {
        t = -(fn_8280A5D8(a) * (fn_82809558(discriminant) + halfB));
        if (t <= maxT && t <= *bestT && (lbl_831F13C0 == 0 || t >= zero)) {
            fn_82810558(direction, origin, t, hitNormal);
            fn_82810B78(hitNormal, hitNormal);
            *bestT = t;
            return 1;
        }
    }
    return 0;
}
