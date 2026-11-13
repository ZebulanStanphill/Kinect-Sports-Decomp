typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef struct { unsigned int w[4]; } Quad_82D0DA40;

typedef struct {
    Quad_82D0DA40 q0;
    char pad10[0xd0];
    __vector4 v;
} State_82D0DA40;

typedef struct {
    int pad0;
    int pad4;
    State_82D0DA40 *state;
} Obj_82D0DA40;

extern void fn_82D18590(State_82D0DA40 *state, void *a, int b, int c, int d);

void fn_82D0DA40(Obj_82D0DA40 *self, void *a, int b, __vector4 *v, Quad_82D0DA40 *q)
{
    self->state->q0 = *q;
    self->state->v = *v;
    fn_82D18590(self->state, a, b, 1, 0);
}
