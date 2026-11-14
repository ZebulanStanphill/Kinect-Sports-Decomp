typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* v77 is the game's reserved zero vector, read with __VMXGetReg (/QVMXReserve). */
__vector4 __VMXGetReg(int n);

typedef struct State_824D7EC0 {
    char pad0[0x10];
    int f10;
    char pad14[0x20 - 0x14];
    __vector4 v[2];
    char pad40[0x54 - 0x40];
    int f54;
    int f58;
    float f5c;
    char pad60[4];
    float f64;
} State_824D7EC0;

typedef struct Owner_824D7EC0 {
    char pad0[0xf4];
    State_824D7EC0 *state;
} Owner_824D7EC0;

typedef struct Self_824D7EC0 {
    char pad0[0x14];
    float f14;
} Self_824D7EC0;

extern const float lbl_821954B0[0xa28 / 4];
extern int fn_824CD030(Owner_824D7EC0 *owner);

void fn_824D7EC0(Self_824D7EC0 *self, Owner_824D7EC0 *owner)
{
    self->f14 = 0.0f;
    if (fn_824CD030(owner) != 0) {
        State_824D7EC0 *s = owner->state;
        int i;

        s->f10 = 0;
        for (i = 0; i < 2; i++)
            s->v[i] = __VMXGetReg(77);
        s->f64 = 0.0f;
        s->f54 = 1;
        s->f58 = 1;
        s->f5c = lbl_821954B0[0x124 / 4];
    }
}
