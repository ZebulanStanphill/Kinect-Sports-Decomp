typedef struct { float x, y, z; } V3_8281EF18;

extern float fn_82812030(void *xf);
extern V3_8281EF18 *fn_82812020(void *xf);
extern void fn_828105C8(V3_8281EF18 *v, float x, float y, float z);
extern void fn_82810208(V3_8281EF18 *a, V3_8281EF18 *b, void *out);
extern void fn_82810328(V3_8281EF18 *a, V3_8281EF18 *b, void *out);

void fn_8281EF18(char *self, void *xf)
{
    float s = fn_82812030(xf);
    V3_8281EF18 pos = *fn_82812020(xf);
    V3_8281EF18 scale;
    fn_828105C8(&scale, s, s, s);
    fn_82810208(&pos, &scale, self + 0xc);
    fn_82810328(&pos, &scale, self);
}
