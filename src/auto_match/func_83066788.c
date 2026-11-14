typedef struct Vec_83066788 {
    float x, y, z, w;
} Vec_83066788;

typedef struct Plane_83066788 {
    float normal[3];
    float origin[3];    /* 0xc */
} Plane_83066788;

extern void fn_82810328(const void *a, const void *b, Vec_83066788 *out);
extern float fn_82810280(const Vec_83066788 *v, const void *c);
extern float fn_82809CB0(float x);

int fn_83066788(const Plane_83066788 *plane, const void *point, float epsilon)
{
    Vec_83066788 d;
    float dist;

    fn_82810328(point, plane->origin, &d);
    dist = fn_82810280(&d, plane);
    if (fn_82809CB0(dist) < epsilon)
        return 2;
    if (dist < 0.0f)
        return 1;
    return 0;
}
