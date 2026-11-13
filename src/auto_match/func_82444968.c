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

typedef struct Matrix_82444968 {
    __vector4 r[4];
} Matrix_82444968;

typedef struct Frame_82444968 {
    char pad00[0x50];
    Matrix_82444968 world;          /* 0x50 */
} Frame_82444968;

typedef struct Object_82444968 {
    char pad00[0x50];
    __vector4 previous;             /* 0x50 */
    __vector4 lastPosition;         /* 0x60 */
    __vector4 position;             /* 0x70 */
    char pad80[0x30];
    __vector4 up;                   /* 0xb0 */
    __vector4 direction;            /* 0xc0 */
    __vector4 velocity;             /* 0xd0 */
    char pade0[0x90];
    int dirty;                      /* 0x170 */
    char pad174[0x44];
    Frame_82444968 *frame;          /* 0x1b8 */
    char pad1bc[0x6d8];
    int moved;                      /* 0x894 */
} Object_82444968;

typedef struct Owner_82444968 {
    Object_82444968 *object;        /* 0x00 */
} Owner_82444968;

typedef struct Container_82444968 {
    Owner_82444968 *owner;          /* 0x00 */
    void *listenerVtbl;             /* 0x04: the listener the function is called on */
} Container_82444968;

typedef struct Timing_82444968 {
    char pad00[0x14];
    float rate;                     /* 0x14 */
} Timing_82444968;

extern float lbl_821CA45C[];
extern Timing_82444968 lbl_8327F880;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Pose_82444968 {
    char pad00[0x10];
    __vector4 position;             /* 0x10 */
    __vector4 direction;            /* 0x20 */
} Pose_82444968;

int fn_825279F8(Object_82444968 *object);
void fn_82528948(Object_82444968 *object);

static __forceinline __vector4 Transform3(__vector4 v, Matrix_82444968 m)
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

static __forceinline __vector4 Replicate(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
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

void fn_82444968(void *listener, const Pose_82444968 *pose)
{
    Container_82444968 *c = (Container_82444968 *)((char *)listener - 4);
    Object_82444968 *object = c->owner->object;
    __vector4 previous, position, direction;
    float scale;
    int state;

    if (object == 0) {
        return;
    }
    if (fn_825279F8(object) != 0) {
        return;
    }
    object->moved = 1;
    scale = lbl_821CA45C[1] / lbl_8327F880.rate;
    previous = object->previous;
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
    object->dirty = 0;
    object->direction = direction;
    object->up = direction;
    fn_82528948(object);
    object->velocity = __vmulfp(__vsubfp(pose->position, previous), Replicate(&scale));
}
