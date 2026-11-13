typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct State_824CD580 {
    __int64 id;
    int c, d;
    __vector4 v0;
    __vector4 v1;
} State_824CD580;

typedef struct Obj_824CD580 {
    char pad[0x1f0];
    State_824CD580 state;
} Obj_824CD580;

void fn_824CD580(Obj_824CD580 *self, State_824CD580 *out)
{
    out->id = self->state.id;
    out->c = self->state.c;
    out->d = self->state.d;
    out->v0 = self->state.v0;
    out->v1 = self->state.v1;
}
