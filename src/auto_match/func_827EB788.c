typedef struct Vec3_827EB788 {
    float x, y, z;
} Vec3_827EB788;

extern float fn_828102D0(const Vec3_827EB788 *a, const Vec3_827EB788 *b);

int fn_827EB788(const Vec3_827EB788 *ca, float ra, const Vec3_827EB788 *cb, float rb)
{
    float r = ra + rb;
    if (fn_828102D0(ca, cb) > r * r) return 0; return 1;
}
