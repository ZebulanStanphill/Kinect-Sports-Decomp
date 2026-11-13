typedef struct Vec3_827F3FA0 {
    float x;
    float y;
    float z;
} Vec3_827F3FA0;

typedef __declspec(align(16)) struct Quat_827F3FA0 {
    float v[4];
} Quat_827F3FA0;

typedef struct Self_827F3FA0 {
    int pad0[2];
    void *node;                    /* 0x08 */
} Self_827F3FA0;

extern void fn_827FA940(void *node, Quat_827F3FA0 *out);
extern unsigned int fn_827FA7C0(void *node);
extern void fn_8280DF98(Quat_827F3FA0 *q, const Vec3_827F3FA0 *v, Vec3_827F3FA0 *out);
extern float fn_82809D40(float x, float z);

extern const Vec3_827F3FA0 lbl_8219609C;

float fn_827F3FA0(Self_827F3FA0 *self)
{
    Quat_827F3FA0 q;
    Vec3_827F3FA0 dir;

    fn_827FA940(self->node, &q);
    if ((fn_827FA7C0(self->node) & 0xf) != 0) {
        fn_8280DF98(&q, &lbl_8219609C, &dir);
        return fn_82809D40(dir.x, dir.z);
    }
    return 0.0f;
}
