typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_823AFE00 {
    __vector4 r[4];
} Matrix_823AFE00;

typedef struct Frame_823AFE00 {
    char pad0[0x50];
    Matrix_823AFE00 world;  /* 0x50 */
} Frame_823AFE00;

typedef struct Mover_823AFE00 {
    char pad0[0x60];
    __vector4 previous;     /* 0x60 */
    __vector4 target;       /* 0x70 */
    char pad80[0xf0];
    int moving;             /* 0x170 */
    char pad174[0x44];
    Frame_823AFE00 *frame;  /* 0x1b8 */
} Mover_823AFE00;

extern int fn_825279F8(Mover_823AFE00 *self);
extern void fn_82528948(Mover_823AFE00 *self);

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_823AFE00 m)
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

static __forceinline void SetTarget_823AFE00(Mover_823AFE00 *mover, __vector4 target)
{
    int state;

    state = fn_825279F8(mover);
    if (state != 0 && state != 3) {
        __vector4 v, zero, mask;
        v = Vector3Transform(target, mover->frame->world);
        mask = __VMXGetReg(67);
        zero = __VMXGetReg(77);
        mover->target = __vsel(v, zero, mask);
    } else {
        mover->target = target;
    }
    mover->previous = mover->target;
    mover->moving = 0;
    fn_82528948(mover);
}

typedef struct Obj_823AFE00 {
    char pad0[0x10];
    __vector4 position;     /* 0x10 */
    char pad20[0x88];
    Mover_823AFE00 *mover;  /* 0xa8 */
    char padac[0x8];
    int busy;               /* 0xb4 */
    char padb8[0x9c];
    int f154;               /* 0x154 */
    int pad158;
    int f15c;               /* 0x15c */
} Obj_823AFE00;

void fn_823AFE00(Obj_823AFE00 *self, __vector4 position)
{
    Mover_823AFE00 *mover;
    __vector4 zero, mask;

    mover = self->mover;
    mask = __VMXGetReg(67);
    zero = __VMXGetReg(77);
    self->position = __vsel(position, zero, mask);
    if (mover != 0 && (self->f154 != 0 || self->f15c != 0) && self->busy == 0)
        SetTarget_823AFE00(mover, self->position);
}
