typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct State_8237B0C0 {
    char pad0[0x20];
    __vector4 position; /* 0x20 */
    char pad30[0x70];
    unsigned int target; /* 0xa0 */
    char padA4[0x1c];
    int active; /* 0xc0 */
    char padC4[0x18];
    int timer; /* 0xdc */
    char padE0[0x2088];
    int mode;    /* 0x2168 */
    int pending; /* 0x216c */
} State_8237B0C0;

int fn_8237B0C0(State_8237B0C0 *self, unsigned int target)
{
    int mode = self->mode;
    if (mode != 0) {
        if (mode == 1) {
            __vector4 position = self->position;
            if (position.vector4_f32[2] >= 0.0f) {
                goto ready;
            }
        }
        if (mode != 2) {
            goto fail;
        }
        {
            __vector4 position = self->position;
            if (position.vector4_f32[2] >= 0.0f) {
                goto fail;
            }
        }
    }
ready:
    if (self->active != 0 && self->pending != 0) {
        goto fail;
    }
    goto success;
fail:
    return 0;
success:
    self->target = target;
    self->timer = 0;
    return 1;
}
