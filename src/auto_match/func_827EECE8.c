typedef struct Vec3_827EECE8 {
    float x;
    float y;
    float z;
} Vec3_827EECE8;

extern float fn_8280A5D8(float value);
extern float fn_82810308(const Vec3_827EECE8 *v);
extern float fn_82810280(const Vec3_827EECE8 *a, const Vec3_827EECE8 *b);
extern void fn_828102A8(const Vec3_827EECE8 *source, Vec3_827EECE8 *output, float scale);
extern void fn_82810328(const Vec3_827EECE8 *a, const Vec3_827EECE8 *b, Vec3_827EECE8 *out);
extern int fn_82810470(const Vec3_827EECE8 *v);
extern void fn_82810B78(const Vec3_827EECE8 *in, Vec3_827EECE8 *out);
extern int fn_827EE128(const Vec3_827EECE8 *origin, const Vec3_827EECE8 *direction, float a, float c,
                       float halfB, float radiusTerm, float maxT, float *bestT, Vec3_827EECE8 *hitNormal);

int fn_827EECE8(const Vec3_827EECE8 *origin, const Vec3_827EECE8 *direction, float radiusTerm, float a,
                const Vec3_827EECE8 *planes, float maxT, float *bestT, Vec3_827EECE8 *hitNormal)
{
    float zero;
    float distance;
    int hit;
    int i;
    Vec3_827EECE8 offset;

    hit = fn_827EE128(origin, direction, a, fn_82810308(origin), fn_82810280(origin, direction), radiusTerm,
                      maxT, bestT, hitNormal);
    if (hit != 0) {
        zero = 0.0f;
        for (i = 0; i < 2; i++) {
            distance = fn_82810280(&planes[i], hitNormal);
            if (distance < zero) {
                fn_828102A8(&planes[i], &offset, fn_8280A5D8(fn_82810308(&planes[i])) * distance);
                fn_82810328(hitNormal, &offset, hitNormal);
                if (fn_82810470(hitNormal) == 0) {
                    fn_82810B78(hitNormal, hitNormal);
                }
            }
        }
    }
    return hit;
}
