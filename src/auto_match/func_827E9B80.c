typedef struct Vec3_827E9B80 {
    float x;
    float y;
    float z;
} Vec3_827E9B80;

extern int lbl_831F13B0;
extern float lbl_820069B4;
extern float lbl_8201DCBC;
extern float lbl_8201DCC0;
extern void fn_82810328(const Vec3_827E9B80 *a, const Vec3_827E9B80 *b, Vec3_827E9B80 *out);
extern void fn_82810240(const Vec3_827E9B80 *a, const Vec3_827E9B80 *b, Vec3_827E9B80 *out);
extern float fn_82810280(const Vec3_827E9B80 *a, const Vec3_827E9B80 *b);
extern float fn_82809CB0(float value);
extern float fn_8280A5D8(float value);

int fn_827E9B80(const Vec3_827E9B80 *origin, const Vec3_827E9B80 *start, const Vec3_827E9B80 *vertex0,
                const Vec3_827E9B80 *vertex1, const Vec3_827E9B80 *vertex2, const Vec3_827E9B80 *end,
                float maxT, float *hitT, float *hitU, float *hitV)
{
    Vec3_827E9B80 edge1;
    Vec3_827E9B80 edge2;
    Vec3_827E9B80 direction;
    Vec3_827E9B80 normal;
    Vec3_827E9B80 offset;
    Vec3_827E9B80 cross;
    float det;
    float tolerance;
    float low;
    float high;
    float u;
    float v;
    float t;
    float inverse;

    fn_82810328(vertex1, vertex0, &edge1);
    fn_82810328(vertex2, vertex0, &edge2);
    fn_82810328(start, end, &direction);
    fn_82810240(&direction, &edge2, &normal);
    det = fn_82810280(&edge1, &normal);
    tolerance = fn_82809CB0(det) * lbl_8201DCC0;
    if (det < tolerance) {
        if (lbl_831F13B0 != 0 || det > lbl_8201DCBC) {
            return 0;
        }
        fn_82810328(origin, vertex0, &offset);
        u = fn_82810280(&offset, &normal);
        if (u > tolerance) {
            return 0;
        }
        low = det - tolerance;
        if (u < low) {
            return 0;
        }
        fn_82810240(&offset, &edge1, &cross);
        v = fn_82810280(&direction, &cross);
        if (v > tolerance) {
            return 0;
        }
        if (v + u < low) {
            return 0;
        }
        t = fn_82810280(&edge2, &cross);
        if (t < det * maxT - tolerance) {
            return 0;
        }
        if (t > tolerance) {
            return 0;
        }
    } else {
        if (det < lbl_820069B4) {
            return 0;
        }
        fn_82810328(origin, vertex0, &offset);
        u = fn_82810280(&offset, &normal);
        if (u < -tolerance) {
            return 0;
        }
        high = tolerance + det;
        if (u > high) {
            return 0;
        }
        fn_82810240(&offset, &edge1, &cross);
        v = fn_82810280(&direction, &cross);
        if (v < -tolerance) {
            return 0;
        }
        if (v + u > high) {
            return 0;
        }
        t = fn_82810280(&edge2, &cross);
        if (t > det * maxT + tolerance) {
            return 0;
        }
        if (t < -tolerance) {
            return 0;
        }
    }
    inverse = fn_8280A5D8(det);
    if (inverse * t >= 0.0f) {
        *hitT = inverse * t;
        *hitU = inverse * u;
        *hitV = inverse * v;
        return 1;
    }
    return 0;
}
