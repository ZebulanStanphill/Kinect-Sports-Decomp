typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_823209E8 {
    __vector4 r[4];
} Matrix_823209E8;

typedef struct Frame_823209E8 {
    char pad0[0x50];
    Matrix_823209E8 world;  /* 0x50 */
} Frame_823209E8;

typedef struct Mover_823209E8 {
    char pad0[0x60];
    __vector4 previous;     /* 0x60 */
    __vector4 target;       /* 0x70 */
    char pad80[0xf0];
    int moving;             /* 0x170 */
    char pad174[0x44];
    Frame_823209E8 *frame;  /* 0x1b8 */
} Mover_823209E8;

extern int fn_825279F8(Mover_823209E8 *self);
extern void fn_82528948(Mover_823209E8 *self);

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_823209E8 m)
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

static __forceinline void SetTarget_823209E8(Mover_823209E8 *mover, __vector4 target)
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

typedef struct Obj_823209E8 {
    char pad0[0x10];
    __vector4 offset;       /* 0x10 */
    Mover_823209E8 *mover;  /* 0x20 */
    void *listener;         /* 0x24 */
    int mode;               /* 0x28 */
    int immediate;          /* 0x2c */
    int arg;                /* 0x30 */
} Obj_823209E8;

extern void fn_8252AD10(Mover_823209E8 *mover, int arg, int mode);
extern void fn_8252AEB8(Mover_823209E8 *mover, int mode, int flag);
extern void fn_82535F50(void *listener, __vector4 *position);

void fn_823209E8(Obj_823209E8 *self, __vector4 position)
{
    __vector4 target;

    if (self->mode != 2) {
        if (self->immediate != 0)
            fn_8252AEB8(self->mover, self->mode, 1);
        else
            fn_8252AD10(self->mover, self->arg, self->mode);
    }
    target = __vaddfp(position, self->offset);
    SetTarget_823209E8(self->mover, target);
    if (self->listener != 0)
        fn_82535F50(self->listener, &target);
}
