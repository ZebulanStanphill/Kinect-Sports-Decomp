typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_8253C348 {
    __vector4 r[4];
} Matrix_8253C348;

typedef struct Frame_8253C348 {
    char pad0[0x50];
    Matrix_8253C348 world;  /* 0x50 */
} Frame_8253C348;

typedef struct Mover_8253C348 {
    char pad0[0x60];
    __vector4 previous;     /* 0x60 */
    __vector4 target;       /* 0x70 */
    char pad80[0xf0];
    int moving;             /* 0x170 */
    char pad174[0x44];
    Frame_8253C348 *frame;  /* 0x1b8 */
} Mover_8253C348;

extern void fn_8252A1B0(Mover_8253C348 *self, const __vector4 *v, int flag);
extern int fn_825279F8(Mover_8253C348 *self);
extern void fn_82528948(Mover_8253C348 *self);

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_8253C348 m)
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

void fn_8253C348(Mover_8253C348 *self, const __vector4 *position, const __vector4 *v)
{
    __vector4 target;
    int state;

    fn_8252A1B0(self, v, 1);
    target = *position;
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
