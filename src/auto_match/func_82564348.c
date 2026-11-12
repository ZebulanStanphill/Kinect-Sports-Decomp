typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vcmpeqfpR(__vector4 a, __vector4 b, unsigned int *cr);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_82564348 {
    __vector4 r[4];
} Matrix_82564348;

typedef struct Frame_82564348 {
    char pad0[0x50];
    Matrix_82564348 world;  /* 0x50 */
} Frame_82564348;

typedef struct Mover_82564348 {
    char pad0[0x50];
    __vector4 position;     /* 0x50 */
    __vector4 previous;     /* 0x60 */
    __vector4 target;       /* 0x70 */
    char pad80[0x20];
    __vector4 direction;    /* 0xa0 */
    char padb0[0xc0];
    int moving;             /* 0x170 */
    char pad174[0x44];
    Frame_82564348 *frame;  /* 0x1b8 */
    char pad1bc[0xa4];
    __vector4 scale;        /* 0x260 */
    char pad270[0x64c];
    float speed;            /* 0x8bc */
} Mover_82564348;

extern int fn_825279F8(Mover_82564348 *self);
extern void fn_82528948(Mover_82564348 *self);

static __forceinline __vector4 Replicate(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

static __forceinline int Vector3Equal(__vector4 a, __vector4 b)
{
    unsigned int cr = 0;

    a = __vpermwi(a, 24);
    b = __vpermwi(b, 24);
    __vcmpeqfpR(a, b, &cr);
    return (cr & 0x80) != 0;
}

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_82564348 m)
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

void fn_82564348(Mover_82564348 *self)
{
    __vector4 delta;
    __vector4 target;
    int state;

    delta = __vmulfp(self->scale, __vmulfp(self->direction, Replicate(self->speed)));
    if (Vector3Equal(delta, __VMXGetReg(77)))
        return;
    target = __vsubfp(self->position, delta);
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
