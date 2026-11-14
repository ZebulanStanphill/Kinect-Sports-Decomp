typedef struct Vec3_83066E70 {
    float x, y, z;
} Vec3_83066E70;

typedef struct Plane_83066E70 {
    Vec3_83066E70 normal;
    Vec3_83066E70 point;
} Plane_83066E70;

extern float lbl_831BCA5C;
extern float lbl_831BCA60;

extern float fn_82810280(const void *a, const void *b);

int fn_83066E70(const Plane_83066E70 *a, const Plane_83066E70 *b)
{
    float da;
    float db;
    if (fn_82810280(&a->normal, &b->normal) < lbl_831BCA60) {
        return 0;
    }
    da = fn_82810280(&a->normal, &a->point);
    db = fn_82810280(&b->normal, &b->point);
    if (da <= db + lbl_831BCA5C && da >= db - lbl_831BCA5C) {
        return 1;
    }
    return 0;
}
