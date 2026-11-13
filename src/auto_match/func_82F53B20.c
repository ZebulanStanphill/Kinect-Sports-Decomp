typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct State_82F53B20 {
    __int64 id;
    int c, d;
    __vector4 v0;
    __vector4 v1;
} State_82F53B20;

typedef struct Obj_82F53B20 {
    char pad[0x30];
    State_82F53B20 state;
} Obj_82F53B20;

void fn_82F53B20(Obj_82F53B20 *self, State_82F53B20 *out)
{
    if (out == 0) {
        return;
    }
    out->id = self->state.id;
    out->c = self->state.c;
    out->d = self->state.d;
    out->v0 = self->state.v0;
    out->v1 = self->state.v1;
}
