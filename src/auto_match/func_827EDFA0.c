typedef struct Vec3_827EDFA0 {
    float x;
    float y;
    float z;
} Vec3_827EDFA0;

extern int lbl_831F13C0;
extern float fn_82809558(float value);
extern float fn_8280A5D8(float value);
extern float fn_82810308(const Vec3_827EDFA0 *v);
extern float fn_82810280(const Vec3_827EDFA0 *a, const Vec3_827EDFA0 *b);
extern void fn_828102A8(const Vec3_827EDFA0 *source, Vec3_827EDFA0 *output, float scale);
extern void fn_82810328(const Vec3_827EDFA0 *a, const Vec3_827EDFA0 *b, Vec3_827EDFA0 *out);
extern int fn_82810470(const Vec3_827EDFA0 *v);
extern void fn_82810558(const Vec3_827EDFA0 *direction, const Vec3_827EDFA0 *origin, float t,
                        Vec3_827EDFA0 *out);
extern void fn_82810B78(const Vec3_827EDFA0 *in, Vec3_827EDFA0 *out);

int fn_827EDFA0(const Vec3_827EDFA0 *axis, const Vec3_827EDFA0 *edge, const Vec3_827EDFA0 *origin,
                const Vec3_827EDFA0 *direction, float crossOrigin, float originBias, float crossDirection,
                float directionBias, float height, float maxT, float *bestT, Vec3_827EDFA0 *hitNormal)
{
    float zero = 0.0f;
    float invLength;
    float originDot;
    float directionDot;
    float scaledOrigin;
    float scaledDirection;
    float a;
    float halfB;
    float c;
    float discriminant;
    float t;
    float along;
    Vec3_827EDFA0 hit;
    Vec3_827EDFA0 projected;

    invLength = fn_8280A5D8(fn_82810308(edge));
    originDot = fn_82810280(origin, edge);
    directionDot = fn_82810280(direction, edge);
    scaledOrigin = originDot * invLength;
    scaledDirection = directionDot * invLength;
    a = scaledOrigin * originDot + originBias;
    c = scaledDirection * directionDot + directionBias;
    halfB = scaledOrigin * directionDot + crossOrigin * crossDirection;
    discriminant = halfB * halfB - a * c;
    if (discriminant > zero) {
        t = -(fn_8280A5D8(c) * (fn_82809558(discriminant) + halfB));
        if (t <= maxT && t <= *bestT && (lbl_831F13C0 == 0 || t >= zero)) {
            fn_82810558(direction, origin, t, &hit);
            along = fn_82810280(&hit, axis);
            if (along > zero && along < height) {
                along = fn_82810280(&hit, axis);
                fn_828102A8(axis, &projected, fn_8280A5D8(height) * along);
                fn_82810328(&hit, &projected, hitNormal);
                if (fn_82810470(hitNormal) == 0) {
                    fn_82810B78(hitNormal, hitNormal);
                }
                *bestT = t;
                return 1;
            }
        }
    }
    return 0;
}
