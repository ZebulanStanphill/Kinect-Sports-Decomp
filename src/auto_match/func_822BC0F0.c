typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Motion_822BC0F0 {
    __vector4 velocity; /* 0x00 */
    __vector4 spin;     /* 0x10 */
    char pad20[0xc];
    int bounces; /* 0x2c */
} Motion_822BC0F0;

typedef struct Body_822BC0F0 {
    char pad0[0x50];
    Motion_822BC0F0 motion; /* 0x50 */
} Body_822BC0F0;

typedef struct Ball_822BC0F0 {
    char pad0[0x80];
    __vector4 position; /* 0x80 */
    char pad90[0x30];
    __vector4 previous; /* 0xc0 */
    char padd0[0x44];
    Body_822BC0F0 *body; /* 0x114 */
} Ball_822BC0F0;

extern void fn_822C6D68(Motion_822BC0F0 *motion, __vector4 *position, __vector4 *previous, __vector4 v);
extern void fn_822C69F0(Motion_822BC0F0 *motion, __vector4 *position, __vector4 *previous, __vector4 v);
extern const float lbl_82193AD8[82];

int fn_822BC0F0(Ball_822BC0F0 *self, __vector4 *target, __vector4 *kick)
{
    Motion_822BC0F0 *motion;
    __vector4 dsq;

    motion = &self->body->motion;
    fn_822C6D68(motion, &self->position, &self->previous, *target);
    fn_822C69F0(motion, &self->position, &self->previous, *kick);
    {
        __vector4 d = __vsubfp(self->position, *target);
        dsq = __vmsum3fp(d, d);
    }
    if (dsq.vector4_f32[0] < lbl_82193AD8[6]) {
        Motion_822BC0F0 *m = &self->body->motion;
        m->velocity = __VMXGetReg(77);
        m->bounces = 0;
        m->spin = __VMXGetReg(77);
        return 1;
    }
    return 0;
}
