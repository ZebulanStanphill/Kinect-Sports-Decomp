typedef struct Vec3_827EE1F8 {
    float x;
    float y;
    float z;
} Vec3_827EE1F8;

extern int lbl_831F13C0;
extern float lbl_820069B4;
extern float lbl_8201DCBC;
extern void fn_82810240(const Vec3_827EE1F8 *a, const Vec3_827EE1F8 *b, Vec3_827EE1F8 *out);
extern float fn_82810280(const Vec3_827EE1F8 *a, const Vec3_827EE1F8 *b);
extern float fn_8280A5D8(float value);

int fn_827EE1F8(const Vec3_827EE1F8 *origin, const Vec3_827EE1F8 *direction, const Vec3_827EE1F8 *edge1,
                const Vec3_827EE1F8 *edge2, float maxT, float *hitT)
{
    Vec3_827EE1F8 normal;
    Vec3_827EE1F8 cross;
    float det;
    float tolerance;
    float u;
    float v;
    float t;

    fn_82810240(edge2, edge1, &normal);
    det = fn_82810280(direction, &normal);
    tolerance = det * 0.0f;
    if (det < 0.0f) {
        if (det > lbl_8201DCBC) {
            return 0;
        }
        u = fn_82810280(origin, &normal);
        if (u > tolerance || u < det) {
            return 0;
        }
        fn_82810240(origin, direction, &cross);
        v = fn_82810280(edge2, &cross);
        if (v > tolerance || v + u < det) {
            return 0;
        }
        t = fn_82810280(edge1, &cross);
        if (lbl_831F13C0 == 0 ? t < det * maxT : (t < det * maxT || t > 0.0f)) {
            return 0;
        }
    } else {
        if (det < lbl_820069B4) {
            return 0;
        }
        u = fn_82810280(origin, &normal);
        if (u < tolerance || u > det) {
            return 0;
        }
        fn_82810240(origin, direction, &cross);
        v = fn_82810280(edge2, &cross);
        if (v < tolerance || v + u > det) {
            return 0;
        }
        t = fn_82810280(edge1, &cross);
        if (lbl_831F13C0 == 0 ? t > det * maxT : (t > det * maxT || t < 0.0f)) {
            return 0;
        }
    }
    *hitT = fn_8280A5D8(det) * t;
    return 1;
}
