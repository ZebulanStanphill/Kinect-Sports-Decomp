typedef struct Vec3_82810410 { float x, y, z; } Vec3_82810410;
extern float fn_82809CB0(float v);
extern float lbl_82196080;

int fn_82810410(const Vec3_82810410 *v)
{
    return fn_82809CB0(v->x * v->x + v->y * v->y + v->z * v->z - 1.0f) < lbl_82196080;
}
