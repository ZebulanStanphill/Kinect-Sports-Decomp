typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_82501190 {
    __vector4 r[4];
} Matrix_82501190;

typedef struct Frame_82501190 {
    char pad0[0x50];
    Matrix_82501190 world;  /* 0x50 */
} Frame_82501190;

typedef struct Vec3_82501190 {
    float x, y, z;
} Vec3_82501190;

typedef struct Mover_82501190 {
    char pad0[0x50];
    __vector4 base;         /* 0x50 */
    __vector4 previous;     /* 0x60 */
    __vector4 target;       /* 0x70 */
    char pad80[0xf0];
    int moving;             /* 0x170 */
    char pad174[0x44];
    Frame_82501190 *frame;  /* 0x1b8 */
    char pad1bc[0xb60 - 0x1bc];
    void *handle;           /* 0xb60 */
    char padb64[0xf80 - 0xb64];
    __vector4 origin;       /* 0xf80 */
} Mover_82501190;

extern void fn_8252A1B0(Mover_82501190 *self, const void *v, int flag);
extern int fn_825279F8(Mover_82501190 *self);
extern void fn_82528948(Mover_82501190 *self);
extern __vector4 *fn_82F52188(__vector4 *out, void *handle, int kind);
extern void fn_82F511A8(void *handle, float *x, float *y, float *z, int kind);

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_82501190 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmaddfp(m.r[2], z, m.r[3]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}

void fn_82501190(Mover_82501190 *self)
{
    __vector4 pos;
    __vector4 target;
    Vec3_82501190 v;
    int state;

    fn_82F52188(&pos, self->handle, 2);
    target = __vaddfp(self->base, __vsubfp(pos, self->origin));
    state = fn_825279F8(self);
    if (state != 0 && state != 3) {
        __vector4 t, zero, mask;
        t = Vector3Transform(target, self->frame->world);
        mask = __VMXGetReg(67);
        zero = __VMXGetReg(77);
        self->target = __vsel(t, zero, mask);
    } else {
        self->target = target;
    }
    self->previous = self->target;
    self->moving = 0;
    fn_82528948(self);
    fn_82F511A8(self->handle, &v.x, &v.y, &v.z, 2);
    v.x = 0.0f;
    v.z = 0.0f;
    fn_8252A1B0(self, &v, 0);
}
