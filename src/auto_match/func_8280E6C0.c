typedef struct Vec4_8280E6C0 { float x, y, z, w; } Vec4_8280E6C0;
extern float fn_82809CB0(float v);

int fn_8280E6C0(const Vec4_8280E6C0 *v)
{
    return fn_82809CB0(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w - 1.0f) < 0.00001f;
}
