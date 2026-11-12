typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);

extern const float lbl_821CA45C[2];

typedef struct State_82305CF8 {
    char pad0[0x4];
    char name[0x1c];                /* 0x04, std::string */
} State_82305CF8;

typedef struct Machine_82305CF8 {
    char pad0[0x20];
    State_82305CF8 *current;        /* 0x20 */
} Machine_82305CF8;

typedef struct Actor_82305CF8 {
    char pad0[0x80];
    __vector4 position;             /* 0x80 */
    char pad90[0x84];
    Machine_82305CF8 *machine;      /* 0x114 */
} Actor_82305CF8;

typedef struct Self_82305CF8 {
    char pad0[0xc];
    Actor_82305CF8 *actor;          /* 0x0c */
    char pad10[0x10];
    __vector4 position;             /* 0x20 */
    __vector4 orientation;          /* 0x30 */
} Self_82305CF8;

extern unsigned char fn_822BD338(const void *s, const char *text);
extern int fn_822C49D8(Actor_82305CF8 *actor, __vector4 direction);

static __forceinline __vector4 QuaternionMultiply(__vector4 a, __vector4 b, __vector4 sign)
{
    __vector4 neg = __vxor(a, sign);
    __vector4 ax = neg, ay = neg, az = neg, aw = neg;
    __vector4 rx, ry, rz, rw;

    ax = __vrlimi(ax, a, 0xb, 0);
    ay = __vrlimi(ay, a, 0xd, 0);
    aw = __vrlimi(aw, a, 0x1, 0);
    az = __vrlimi(az, a, 0x7, 0);
    rx = __vmsum4fp(ax, __vpermwi(b, 228));
    ry = __vmsum4fp(ay, __vpermwi(b, 177));
    rz = __vmsum4fp(az, __vpermwi(b, 78));
    rw = __vmsum4fp(aw, b);
    return __vmrghw(__vmrghw(rx, rz), __vmrghw(ry, rw));
}

int fn_82305CF8(Self_82305CF8 *self)
{
    if (fn_822BD338(self->actor->machine->current->name, "idle")) {
        __vector4 d = __vsubfp(self->actor->position, self->position);
        if (d.vector4_f32[0] * d.vector4_f32[0] + d.vector4_f32[2] * d.vector4_f32[2] < lbl_821CA45C[1]) {
            __vector4 sign = __vspltisw(-1);
            __vector4 q = self->orientation;
            __vector4 axis = __vrlimi(__vspltisw(0), __VMXGetReg(71), 0xe, 0);
            __vector4 conj, r;

            sign = __vslw(sign, sign);
            conj = __vrlimi(__vxor(q, sign), q, 1, 0);
            r = QuaternionMultiply(conj, axis, sign);
            r = QuaternionMultiply(r, q, sign);
            if (fn_822C49D8(self->actor, r) != 0)
                return 1;
        }
    }
    return 0;
}
