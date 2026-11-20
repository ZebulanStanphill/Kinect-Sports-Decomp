typedef struct Vec3_827EB7D0 {
    float x;
    float y;
    float z;
} Vec3_827EB7D0;

extern void fn_82810328(const Vec3_827EB7D0 *a, const Vec3_827EB7D0 *b, Vec3_827EB7D0 *out);
extern float fn_82810308(const Vec3_827EB7D0 *v);
extern float fn_82809558(float value);

int fn_827EB7D0(const Vec3_827EB7D0 *center1, float radius1, const Vec3_827EB7D0 *center2, float radius2,
                float *along, float *across, Vec3_827EB7D0 *offset, float *distance)
{
    float d;
    float dd;
    float r1sq;
    float r2sq;
    float twoD;
    float k;
    float disc;

    *along = 0.0f;
    *across = radius1;
    fn_82810328(center2, center1, offset);
    d = fn_82810308(offset);
    if (!(d > 1e-5f)) {
        *distance = d;
        return -1;
    }
    d = fn_82809558(d);
    *distance = d;
    if (-radius1 < d - radius2 && d + radius2 < radius1) {
        return -1;
    }
    if (-radius2 < d - radius1 && d + radius1 < radius2) {
        return -1;
    }
    if (d > 1e-5f) {
        dd = d * d;
        r1sq = radius1 * radius1;
        r2sq = radius2 * radius2;
        twoD = d * 2.0f;
        k = r1sq + dd - r2sq;
        *along = (dd - r2sq + r1sq) / twoD;
        disc = dd * radius1 * radius1 * 4.0f - k * k;
        if (disc >= 0.0f) {
            *across = fn_82809558(disc) / (d * 2.0f);
            return 1;
        }
    }
    return 0;
}
