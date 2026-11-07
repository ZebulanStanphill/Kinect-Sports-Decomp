typedef struct Vec3_82873040 {
    int x;
    int y;
    int z;
} Vec3_82873040;

extern Vec3_82873040 *fn_8287AB90(void *self);
extern Vec3_82873040 fn_828108B8(void *m, Vec3_82873040 *v);
extern void fn_82810280(Vec3_82873040 *v, void *q);
extern Vec3_82873040 fn_82810A28(void *q);
extern Vec3_82873040 fn_82810830(Vec3_82873040 *a, Vec3_82873040 *b);
extern void fn_82835208(void *out, Vec3_82873040 *v);

int fn_82873040(char *self, void *m, void *out)
{
    Vec3_82873040 a;
    Vec3_82873040 b;
    Vec3_82873040 c;
    void *q;

    a = *fn_8287AB90(self);
    b = fn_828108B8(m, &a);
    q = self + 0xf4;
    fn_82810280(&b, q);
    {
        Vec3_82873040 d;
        c = fn_82810A28(q);
        d = fn_82810830(&a, &c);
        fn_82835208(out, &d);
    }
    return 0x20160000;
}
