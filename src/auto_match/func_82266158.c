typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_82266158 {
    __vector4 r[4];
} Matrix_82266158;

typedef struct Frame_82266158 {
    char pad0[0x50];
    Matrix_82266158 world;  /* 0x50 */
} Frame_82266158;

typedef struct Mover_82266158 {
    char pad0[0x60];
    __vector4 previous;     /* 0x60 */
    __vector4 target;       /* 0x70 */
    char pad80[0xf0];
    int moving;             /* 0x170 */
    char pad174[0x44];
    Frame_82266158 *frame;  /* 0x1b8 */
} Mover_82266158;

typedef struct Owner_82266158 {
    char pad0[0xdc];
    Mover_82266158 *mover;  /* 0xdc */
} Owner_82266158;

extern int fn_825279F8(Mover_82266158 *self);
extern void fn_82528948(Mover_82266158 *self);

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_82266158 m)
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

void fn_82266158(Owner_82266158 *owner, __vector4 target)
{
    Mover_82266158 *self = owner->mover;
    int state;

    if (self != 0) {
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
}
