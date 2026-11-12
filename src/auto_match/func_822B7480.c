// Applies a node's offset position and rotation to its model: the position (base + offset) is
// transformed by the parent's world matrix unless the model is unparented (type 0 or 3), then
// both position slots are set; the rotation is the normalised product of the two quaternions,
// written to both rotation slots. The model is refreshed after each part.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct {
    __vector4 r[4];
} XMMATRIX;

typedef struct Frame_822B7480 {
    char pad0[0x50];
    XMMATRIX world;             /* 0x50 */
} Frame_822B7480;

typedef struct Model_822B7480 {
    char pad0[0x60];
    __vector4 prevPosition;     /* 0x60 */
    __vector4 position;         /* 0x70 */
    char pad80[0x30];
    __vector4 prevRotation;     /* 0xb0 */
    __vector4 rotation;         /* 0xc0 */
    char padd0[0xa0];
    int dirty;                  /* 0x170 */
    char pad174[0x44];
    Frame_822B7480 *parent;     /* 0x1b8 */
} Model_822B7480;

typedef struct Node_822B7480 {
    char pad0[0x14];
    Model_822B7480 *model;      /* 0x14 */
    char pad18[0x68];
    __vector4 basePosition;     /* 0x80 */
    __vector4 baseRotation;     /* 0x90 */
    __vector4 offsetPosition;   /* 0xa0 */
    __vector4 offsetRotation;   /* 0xb0 */
} Node_822B7480;

int fn_825279F8(Model_822B7480 *model);
void fn_82528948(Model_822B7480 *model);

static __forceinline __vector4 Transform3(__vector4 v, XMMATRIX m)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);
    __vector4 r;

    r = __vmaddfp(m.r[2], z, m.r[3]);
    r = __vmaddfp(y, m.r[1], r);
    r = __vmaddfp(x, m.r[0], r);
    return r;
}

static __forceinline __vector4 QuaternionMultiply(__vector4 q1, __vector4 q2, __vector4 signMask)
{
    __vector4 q2wzyx, q2zwxy, q2yxwz, negated, nx, ny, nz, nw, x, y, z, w;

    q2zwxy = __vpermwi(q2, 177);
    q2yxwz = __vpermwi(q2, 78);
    q2wzyx = __vpermwi(q2, 228);
    negated = __vxor(q1, signMask);
    nx = __vrlimi(negated, q1, 0xb, 0);
    nw = __vrlimi(negated, q1, 0x1, 0);
    ny = __vrlimi(negated, q1, 0xd, 0);
    nz = __vrlimi(negated, q1, 0x7, 0);
    x = __vmsum4fp(nx, q2wzyx);
    w = __vmsum4fp(nw, q2);
    y = __vmsum4fp(ny, q2zwxy);
    z = __vmsum4fp(nz, q2yxwz);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
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

void fn_822B7480(Node_822B7480 *self)
{
    Model_822B7480 *model = self->model;
    __vector4 position = __vaddfp(self->basePosition, self->offsetPosition);
    int type = fn_825279F8(model);

    if (type != 0 && type != 3) {
        __vector4 v, zero, mask;
        v = Transform3(position, model->parent->world);
        zero = __VMXGetReg(77);
        mask = __VMXGetReg(67);
        model->position = __vsel(v, zero, mask);
    } else {
        model->position = position;
    }
    model->prevPosition = model->position;
    model->dirty = 0;
    fn_82528948(model);
    {
        __vector4 signMask, q;
        signMask = __vspltisw(-1);
        signMask = __vslw(signMask, signMask);
        q = QuaternionMultiply(self->offsetRotation, self->baseRotation, signMask);
        q = Normalize4(q);
        model = self->model;
        model->dirty = 0;
        model->rotation = q;
        model->prevRotation = q;
        fn_82528948(model);
    }
}
