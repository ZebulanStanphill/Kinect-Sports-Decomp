typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Flags_830A7240 {
    unsigned char axes; /* 0x0: two bits per axis */
} Flags_830A7240;

typedef struct Body_830A7240 {
    char pad0[0x30];
    __vector4 linear[3]; /* 0x30 */
    char pad60[0x30];
    __vector4 angular[3]; /* 0x90 */
} Body_830A7240;

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

void fn_830A7240(Flags_830A7240 *flags, Body_830A7240 *body)
{
    if (flags->axes == 0) {
        return;
    }
    if (flags->axes & 0x3) {
        SetZero(&body->linear[0]);
        SetZero(&body->angular[0]);
    }
    if (flags->axes & 0xc) {
        SetZero(&body->linear[1]);
        SetZero(&body->angular[1]);
    }
    if (flags->axes & 0x30) {
        SetZero(&body->linear[2]);
        SetZero(&body->angular[2]);
    }
}
