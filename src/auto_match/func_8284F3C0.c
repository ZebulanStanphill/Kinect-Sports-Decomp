typedef struct State_8284F3C0 {
    char pad[0x48];
    int count;
} State_8284F3C0;

typedef struct Self_8284F3C0 {
    char pad[0x80];
    State_8284F3C0 *state;
    char pad84[8];
    float result;
    char pad90[0x24];
    float scale;
} Self_8284F3C0;

void fn_8284F3C0(Self_8284F3C0 *self, float value)
{
    if (self->state->count <= 1)
        return;
    self->result = (value * 2.0f + 1.0f) * self->scale * 0.5f;
}
