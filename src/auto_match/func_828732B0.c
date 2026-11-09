typedef struct Vec3_828732B0 {
    int x;
    int y;
    int z;
} Vec3_828732B0;

extern Vec3_828732B0 *fn_8287AB90(void *self);
extern Vec3_828732B0 fn_828108B8(void *m, Vec3_828732B0 *v);
extern float fn_82810BE8(Vec3_828732B0 *v);
extern void fn_82810B78(Vec3_828732B0 *v, Vec3_828732B0 *out);
extern Vec3_828732B0 fn_82810A28(Vec3_828732B0 *v, float scale);
extern Vec3_828732B0 fn_82810830(Vec3_828732B0 *a, Vec3_828732B0 *b);
extern void fn_82835208(void *out, Vec3_828732B0 *v);

int fn_828732B0(char *self, void *m, void *out)
{
    Vec3_828732B0 a;
    Vec3_828732B0 b;
    Vec3_828732B0 c;
    Vec3_828732B0 q;
    float scale;

    a = *fn_8287AB90(self);
    b = fn_828108B8(m, &a);
    scale = *(float *)(self+0xf4);
    if (fn_82810BE8(&b) < scale) scale = fn_82810BE8(&b);
    fn_82810B78(&b, &q);
    {
        Vec3_828732B0 d;
        c = fn_82810A28(&q,scale);
        d = fn_82810830(&a, &c);
        fn_82835208(out, &d);
    }
    return 0x20190000;
}
