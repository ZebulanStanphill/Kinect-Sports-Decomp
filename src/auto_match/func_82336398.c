typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Motion_82336398 {
    __vector4 velocity;     /* 0x00 */
    __vector4 spin;         /* 0x10 */
    char pad20[0xc];
    int bounces;            /* 0x2c */
} Motion_82336398;

typedef struct Body_82336398 {
    char pad0[0x50];
    Motion_82336398 motion; /* 0x50 */
} Body_82336398;

typedef struct Settings_82336398 {
    char pad0[0xaa8];
    float radius;           /* 0xaa8 */
} Settings_82336398;

typedef struct Ball_82336398 {
    char pad0[0x80];
    __vector4 position;     /* 0x80 */
    char pad90[0x30];
    __vector4 previous;     /* 0xc0 */
    char padd0[0x44];
    Body_82336398 *body;    /* 0x114 */
    char pad118[0x120];
    Settings_82336398 **settings; /* 0x238 */
} Ball_82336398;

typedef struct Self_82336398 {
    char pad0[0x200];
    __vector4 kick;         /* 0x200 */
    char pad210[0x20];
    Ball_82336398 *ball;    /* 0x230 */
} Self_82336398;

extern void fn_822C6D68(Motion_82336398 *motion, __vector4 *position, __vector4 *previous, __vector4 v);
extern void fn_822C69F0(Motion_82336398 *motion, __vector4 *position, __vector4 *previous, __vector4 v);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

int fn_82336398(Self_82336398 *self, __vector4 *target)
{
    float radius = (*self->ball->settings)->radius;
    __vector4 len = Length3(__vsubfp(self->ball->position, *target));
    __vector4 dsq;
    Motion_82336398 *motion;

    if (len.vector4_f32[0] < radius)
        return 1;
    motion = &self->ball->body->motion;
    fn_822C6D68(motion, &self->ball->position, &self->ball->previous, *target);
    fn_822C69F0(motion, &self->ball->position, &self->ball->previous, self->kick);
    {
        __vector4 d = __vsubfp(self->ball->position, *target);
        dsq = __vmsum3fp(d, d);
    }
    if (dsq.vector4_f32[0] < radius * radius) {
        Motion_82336398 *m = &self->ball->body->motion;
        m->velocity = __VMXGetReg(77);
        m->bounces = 0;
        m->spin = __VMXGetReg(77);
        return 1;
    }
    return 0;
}
