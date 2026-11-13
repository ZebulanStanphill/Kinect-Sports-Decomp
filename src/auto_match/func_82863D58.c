typedef struct Vec3_82863D58 {
    float x, y, z;
} Vec3_82863D58;

typedef struct Obj_82863D58 {
    char pad0[0xc];
    Vec3_82863D58 fc;        /* 0x0c */
    float f18;               /* 0x18 */
    Vec3_82863D58 f1c;       /* 0x1c */
} Obj_82863D58;

extern void fn_82810360(Vec3_82863D58 *v, const Vec3_82863D58 *other);
extern void fn_82863B20(Obj_82863D58 *self, const Vec3_82863D58 *a);
extern void fn_82863BC0(Obj_82863D58 *self, float *out);
extern void fn_82863C50(Obj_82863D58 *self, const Vec3_82863D58 *b);
extern void fn_82863CD0(Obj_82863D58 *self, const Vec3_82863D58 *b, int c);

void fn_82863D58(Obj_82863D58 *self, unsigned int mode, const Vec3_82863D58 *a, float *out, const Vec3_82863D58 *b, int c)
{
    switch (mode) {
    case 0:
        fn_82863B20(self, a);
        fn_82863BC0(self, out);
        fn_82863C50(self, b);
        break;
    case 1:
        fn_82810360(&self->fc, a);
        *out = self->f18;
        fn_82810360(&self->f1c, b);
        break;
    }
    fn_82863CD0(self, b, c);
}
