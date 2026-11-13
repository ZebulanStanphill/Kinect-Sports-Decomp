typedef struct Vec3_82873120 {
    int x;
    int y;
    int z;
} Vec3_82873120;

#define MAX_82873120(a, b) ((a) > (b) ? (a) : (b))
#define MIN_82873120(a, b) ((a) < (b) ? (a) : (b))

extern Vec3_82873120 *fn_8287AB90(void *self);
extern Vec3_82873120 fn_828108B8(void *m, Vec3_82873120 *v);
extern float fn_82810280(Vec3_82873120 *v, Vec3_82873120 *axis);
extern Vec3_82873120 fn_82810A28(Vec3_82873120 *v, float scale);
extern Vec3_82873120 fn_82810830(Vec3_82873120 *a, Vec3_82873120 *b);
extern void fn_82835208(void *out, Vec3_82873120 *v);

int fn_82873120(char *self, void *m, void *out)
{
    Vec3_82873120 a;
    Vec3_82873120 b;
    Vec3_82873120 c;
    Vec3_82873120 *axis;

    a = *fn_8287AB90(self);
    b = fn_828108B8(m, &a);
    axis = (Vec3_82873120 *)(self + 0xf4);
    {
        Vec3_82873120 d;
        c = fn_82810A28(axis, MIN_82873120(MAX_82873120(fn_82810280(&b, axis), *(float *)(self + 0x100)), 0.0f));
        d = fn_82810830(&a, &c);
        fn_82835208(out, &d);
    }
    return 0x20170000;
}
