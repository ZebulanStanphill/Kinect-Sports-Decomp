typedef struct Vec4_8306B798 { float x, y, z, w; } Vec4_8306B798;
extern float fn_82809CB0(float v);
extern float lbl_82196080;

int fn_8306B798(const Vec4_8306B798 *v)
{
    return fn_82809CB0(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w - 1.0f) < lbl_82196080;
}
