typedef struct Vec3_8281D2E8 {
    float x, y, z;
} Vec3_8281D2E8;

extern float fn_82810308(const Vec3_8281D2E8 *v);
extern float fn_8280A550(float x);
extern void fn_828102A8(const Vec3_8281D2E8 *v, Vec3_8281D2E8 *out, float s);

void fn_8281D2E8(const Vec3_8281D2E8 *v, float length, Vec3_8281D2E8 *out)
{
    fn_828102A8(v, out, fn_8280A550(fn_82810308(v)) * length);
}
