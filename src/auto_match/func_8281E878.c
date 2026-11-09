typedef struct Vec3_8281E878 {
    float x;
    float y;
    float z;
} Vec3_8281E878;

extern void fn_8280FFC0(void *out, float *x, float *y, float *z, int order);

void fn_8281E878(void *out, Vec3_8281E878 *v, int order)
{
    fn_8280FFC0(out, &v->x, &v->y, &v->z, order);
}
