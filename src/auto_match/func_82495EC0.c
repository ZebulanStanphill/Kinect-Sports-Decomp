/* Pushes the owner's position and normalised direction into its model (teleporting it on the
   first update, otherwise moving it through the parent's frame), then copies the flags. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
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

typedef struct Matrix_82495EC0 {
    __vector4 r[4];
} Matrix_82495EC0;

typedef struct Node_82495EC0 {
    char pad0[0x3];
    unsigned char dirty;       /* 0x03 */
    char pad4[0x4c];
    Matrix_82495EC0 world;     /* 0x50 */
} Node_82495EC0;

typedef struct Model_82495EC0 {
    char pad0[0x60];
    __vector4 previous;        /* 0x60 */
    __vector4 position;        /* 0x70 */
    char pad80[0x30];
    __vector4 direction;       /* 0xb0 */
    __vector4 previousDirection; /* 0xc0 */
    char padd0[0xa0];
    int moved;                 /* 0x170 */
    char pad174[0x3c];
    int flags;                 /* 0x1b0 */
    char pad1b4[0x4];
    Node_82495EC0 *parent;     /* 0x1b8 */
    char pad1bc[0x14];
    int value;                 /* 0x1d0 */
    char pad1d4[0x6c0];
    int active;                /* 0x894 */
} Model_82495EC0;

typedef struct Self_82495EC0 {
    char pad0[0x18];
    float position[3];         /* 0x18 */
    char pad24[0xc];
    __vector4 direction;       /* 0x30 */
    char pad40[0x14];
    int value;                 /* 0x54 */
    char pad58[0x38];
    Model_82495EC0 *model;     /* 0x90 */
    int disabled;              /* 0x94 */
    int reset;                 /* 0x98 */
} Self_82495EC0;

int fn_825279F8(Model_82495EC0 *model);
void fn_82528948(Model_82495EC0 *model);

static __forceinline __vector4 LoadFloat3(const float *p)
{
    __vector4 vl, vr, zero, mask;

    vl = __lvlx(p, 0);
    vr = __lvrx(p, 12);
    vr = __vsldoi(vr, vr, 4);
    vl = __vor(vl, vr);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(vl, zero, mask);
}

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

static __forceinline __vector4 Transform(__vector4 v, Matrix_82495EC0 m)
{
    __vector4 x, y, z, r;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    r = __vmaddfp(m.r[2], z, m.r[3]);
    r = __vmaddfp(y, m.r[1], r);
    r = __vmaddfp(x, m.r[0], r);
    return r;
}

static __forceinline void Teleport(Model_82495EC0 *model, __vector4 position)
{
    model->moved = 0;
    model->position = position;
    model->previous = position;
    fn_82528948(model);
}

static __forceinline void Move(Model_82495EC0 *model, __vector4 position)
{
    int state;
    __vector4 zero, mask;

    state = fn_825279F8(model);
    if (state == 0 || state == 3) {
        model->position = position;
    } else {
        zero = __VMXGetReg(77);
        mask = __VMXGetReg(67);
        model->position = __vsel(Transform(position, model->parent->world), zero, mask);
    }
    model->moved = 0;
    model->previous = model->position;
    fn_82528948(model);
}

static __forceinline void SetDirection(Model_82495EC0 *model, __vector4 direction)
{
    model->moved = 0;
    model->previousDirection = direction;
    model->direction = direction;
    fn_82528948(model);
}

void fn_82495EC0(Self_82495EC0 *self)
{
    Node_82495EC0 *node;
    __vector4 v;

    if (self->disabled == 0) {
        self->model->active = 0;
        if (self->reset != 0) {
            node = self->model->parent;
            if (node != 0)
                node->dirty = 0;
            self->reset = 0;
            v = LoadFloat3(self->position);
            Teleport(self->model, v);
        } else {
            v = LoadFloat3(self->position);
            Move(self->model, v);
        }
        v = Normalize4(self->direction);
        SetDirection(self->model, v);
        self->model->flags = 0;
        self->model->value = self->value;
    }
}
