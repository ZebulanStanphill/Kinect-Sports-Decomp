typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int);

typedef struct State_8236B008 {
    char pad[0xe90];
    __vector4 value;
    int key;
    int mode;
    int count;
    int padEac;
    __vector4 a;
    __vector4 b;
    float time;
    int indices[3];
} State_8236B008;

static __forceinline void Store_8236B008(__vector4 *out, __vector4 value)
{
    *out = value;
}

void fn_8236B008(State_8236B008 *self, int key, __vector4 value)
{
    int *index = self->indices;
    self->time = 0.0f;
    Store_8236B008(&self->value, __VMXGetReg(77));
    self->key = -1;
    self->count = 0;
    Store_8236B008(&self->a, __VMXGetReg(77));
    self->mode = 3;
    Store_8236B008(&self->b, __VMXGetReg(77));
    for (; index != self->indices + 3; index++) {
        *index = 0;
    }
    self->value = value;
    self->key = key;
}
