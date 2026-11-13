typedef struct Vec3_827F3F30 {
    float x;
    float y;
    float z;
} Vec3_827F3F30;

typedef __declspec(align(16)) struct Quat_827F3F30 {
    float v[4];
} Quat_827F3F30;

typedef struct Self_827F3F30 {
    int pad0[2];
    void *node;                    /* 0x08 */
} Self_827F3F30;

extern void fn_827FA918(void *node, Quat_827F3F30 *out);
extern unsigned int fn_827FA7B8(void *node);
extern void fn_8280DF98(Quat_827F3F30 *q, const Vec3_827F3F30 *v, Vec3_827F3F30 *out);
extern float fn_82809D40(float x, float z);

extern const Vec3_827F3F30 lbl_8219609C;

float fn_827F3F30(Self_827F3F30 *self)
{
    Quat_827F3F30 q;
    Vec3_827F3F30 dir;

    fn_827FA918(self->node, &q);
    if ((fn_827FA7B8(self->node) & 0xf) != 0) {
        fn_8280DF98(&q, &lbl_8219609C, &dir);
        return fn_82809D40(dir.x, dir.z);
    }
    return 0.0f;
}
