typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_8253C430 {
    __vector4 r[4];
} Matrix_8253C430;

typedef struct Frame_8253C430 {
    char pad0[0x50];
    Matrix_8253C430 world;  /* 0x50 */
} Frame_8253C430;

typedef struct Mover_8253C430 {
    char pad0[0x60];
    __vector4 previous;     /* 0x60 */
    __vector4 target;       /* 0x70 */
    char pad80[0x30];
    __vector4 direction;    /* 0xb0 */
    __vector4 facing;       /* 0xc0 */
    char padd0[0xa0];
    int moving;             /* 0x170 */
    char pad174[0x44];
    Frame_8253C430 *frame;  /* 0x1b8 */
} Mover_8253C430;

extern int fn_825279F8(Mover_8253C430 *self);
extern void fn_82528948(Mover_8253C430 *self);

static __forceinline __vector4 Normalize4(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum4fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_8253C430 m)
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

void fn_8253C430(Mover_8253C430 *self, __vector4 target, __vector4 direction)
{
    __vector4 n;
    int state;

    n = Normalize4(direction);
    self->facing = n;
    self->direction = n;
    self->moving = 0;
    state = fn_825279F8(self);
    if (state != 0 && state != 3) {
        __vector4 v, zero, mask;
        v = Vector3Transform(target, self->frame->world);
        mask = __VMXGetReg(67);
        zero = __VMXGetReg(77);
        self->target = __vsel(v, zero, mask);
    } else {
        self->target = target;
    }
    self->previous = self->target;
    self->moving = 0;
    fn_82528948(self);
}
