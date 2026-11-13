typedef struct Vec3_83060FF8 {
    float x, y, z;
} Vec3_83060FF8;

typedef struct Obj_83060FF8 {
    char pad0[0xc];
    int count;
} Obj_83060FF8;

extern void fn_83060EC8(Obj_83060FF8 *self, Vec3_83060FF8 *min, Vec3_83060FF8 *max);
extern void fn_82810328(const Vec3_83060FF8 *a, const Vec3_83060FF8 *b, Vec3_83060FF8 *out);
extern float fn_82810BE8(const Vec3_83060FF8 *v);
extern void fn_82810558(Vec3_83060FF8 *out, const Vec3_83060FF8 *a, float s, const Vec3_83060FF8 *b);

void fn_83060FF8(Obj_83060FF8 *self, Vec3_83060FF8 *center, float *radius)
{
    Vec3_83060FF8 min;
    Vec3_83060FF8 max;

    fn_83060EC8(self, &min, &max);
    if (self->count != 0) {
        fn_82810328(&max, &min, center);
        *radius = fn_82810BE8(center) * 0.5f;
        fn_82810558(center, &min, 0.5f, center);
    }
}
