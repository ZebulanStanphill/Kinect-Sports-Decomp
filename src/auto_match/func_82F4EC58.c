typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec3_82F4EC58 {
    float x, y, z;
} Vec3_82F4EC58;

typedef struct Part_82F4EC58 {
    char data[0x7f0];
} Part_82F4EC58;

typedef struct Obj_82F4EC58 {
    char pad0[0x50];
    __vector4 v;                /* 0x0050 */
    Part_82F4EC58 parts[3];     /* 0x0060 */
    float f1830;                /* 0x1830 */
    Vec3_82F4EC58 pos;          /* 0x1834 */
    int f1840;                  /* 0x1840 */
} Obj_82F4EC58;

extern __vector4 fn_82F534D8(float x, float y, float z, float w);
extern void *fn_82F53978(Part_82F4EC58 *self);
extern void fn_82F59478(Vec3_82F4EC58 *self, float x, float y, float z);

Obj_82F4EC58 *fn_82F4EC58(Obj_82F4EC58 *self)
{
    self->v = fn_82F534D8(0.0f, 0.0f, 0.0f, 0.0f);
    fn_82F53978(&self->parts[0]);
    fn_82F53978(&self->parts[1]);
    fn_82F53978(&self->parts[2]);
    self->f1830 = 0.0f;
    fn_82F59478(&self->pos, 0.0f, 0.0f, 0.0f);
    self->f1840 = 0;
    return self;
}
