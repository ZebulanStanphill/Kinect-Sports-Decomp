// Refreshes the owner, then, when both of the body's vectors (+0x60 and +0x50) are shorter than
// lbl_82193AD8[6] and the state's +0x300 flag is clear, calls fn_822E23F0 and switches to state 2.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Motion_822E26D0 {
    __vector4 velocity;     // 0x00
    __vector4 angular;      // 0x10
} Motion_822E26D0;

typedef struct Body_822E26D0 {
    char pad0[0x50];
    Motion_822E26D0 motion; // 0x50
} Body_822E26D0;

typedef struct State_822E26D0 {
    char pad0[0x300];
    int locked;             // 0x300
} State_822E26D0;

typedef struct Obj_822E26D0 {
    char pad0[0x8];
    Body_822E26D0 *body;    // 0x08
    char pad0c[0x8];
    State_822E26D0 *state;  // 0x14
} Obj_822E26D0;

extern float lbl_82193AD8[];

void fn_822D0570(Obj_822E26D0 *self, int a, int b, int c);
void fn_822E23F0(Obj_822E26D0 *self);
void fn_822E2D18(Obj_822E26D0 *self, int state);

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

void fn_822E26D0(Obj_822E26D0 *self)
{
    Motion_822E26D0 *motion;
    __vector4 len;

    fn_822D0570(self, 1, 1, 0);
    motion = &self->body->motion;
    len = Length3(motion->angular);
    if (len.vector4_f32[0] < lbl_82193AD8[6]) {
        len = Length3(motion->velocity);
        if (len.vector4_f32[0] < lbl_82193AD8[6] && self->state->locked == 0) {
            fn_822E23F0(self);
            fn_822E2D18(self, 2);
        }
    }
}
