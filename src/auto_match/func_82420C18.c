typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
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

typedef struct Matrix_82420C18 {
    __vector4 r[4];
} Matrix_82420C18;

typedef struct Frame_82420C18 {
    char pad00[0x50];
    Matrix_82420C18 world;          /* 0x50 */
} Frame_82420C18;

typedef struct Object_82420C18 {
    char pad00[0x60];
    __vector4 lastPosition;         /* 0x60 */
    __vector4 position;             /* 0x70 */
    char pad80[0x30];
    __vector4 up;                   /* 0xb0 */
    __vector4 direction;            /* 0xc0 */
    char padd0[0xa0];
    int dirty;                      /* 0x170 */
    char pad174[0x44];
    Frame_82420C18 *frame;          /* 0x1b8 */
} Object_82420C18;

typedef struct Owner_82420C18 {
    char pad00[0x10];
    Object_82420C18 *object;        /* 0x10 */
} Owner_82420C18;

typedef struct Pose_82420C18 {
    char pad00[0x10];
    __vector4 position;             /* 0x10 */
    __vector4 direction;            /* 0x20 */
} Pose_82420C18;

int fn_825279F8(Object_82420C18 *object);
void fn_82528948(Object_82420C18 *object);

static __forceinline __vector4 Transform3(__vector4 v, Matrix_82420C18 m)
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

void fn_82420C18(Owner_82420C18 *self, const Pose_82420C18 *pose)
{
    Object_82420C18 *object;
    __vector4 position;
    __vector4 direction;
    int state;

    if (self->object == 0) {
        return;
    }
    if (fn_825279F8(self->object) != 0) {
        return;
    }
    object = self->object;
    position = pose->position;
    state = fn_825279F8(object);
    if (state != 0 && state != 3) {
        __vector4 v, zero, mask;

        v = Transform3(position, object->frame->world);
        zero = __VMXGetReg(77);
        mask = __VMXGetReg(67);
        object->position = __vsel(v, zero, mask);
    } else {
        object->position = position;
    }
    object->dirty = 0;
    object->lastPosition = object->position;
    fn_82528948(object);
    direction = Normalize4(pose->direction);
    object = self->object;
    object->dirty = 0;
    object->direction = direction;
    object->up = direction;
    fn_82528948(object);
}
