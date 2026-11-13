typedef struct Vec_827EC7C0 {
    float x, y, z, w;
} Vec_827EC7C0;

extern void fn_82810328(const void *a, const void *b, Vec_827EC7C0 *out);
extern float fn_82810280(const Vec_827EC7C0 *v, const void *c);
extern float fn_82810308(const Vec_827EC7C0 *v);

int fn_827EC7C0(const void *a, const void *b, const void *c, float scale)
{
    Vec_827EC7C0 d;
    float limit;

    fn_82810328(a, b, &d);
    limit = fn_82810280(&d, c) * scale;
    if (limit > 0.0f && limit * limit >= fn_82810308(&d))
        return 1;
    return 0;
}
