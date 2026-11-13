typedef struct State_824424A0 {
    int mode;
    float time;
    char pad8[0x28 - 8];
    unsigned char surface;  /* 0x28 */
} State_824424A0;

typedef struct Self_824424A0 {
    int x0;
    int *anim;              /* 0x04 */
    State_824424A0 *state;  /* 0x08 */
} Self_824424A0;

extern void fn_825327A8(int anim, const char *name);

void fn_824424A0(Self_824424A0 *self, int mode)
{
    if (mode == self->state->mode) {
        return;
    }
    switch (mode) {
    case 1:
        fn_825327A8(*self->anim, "measuringguyrun");
        break;
    case 2:
        fn_825327A8(*self->anim, "measuringguywalk");
        break;
    case 3:
        switch (self->state->surface) {
        case 2:
        case 3:
            fn_825327A8(*self->anim, "stickitintrack");
            break;
        case 7:
            fn_825327A8(*self->anim, "stickitinsand");
            break;
        default:
            fn_825327A8(*self->anim, "stickitingrass");
            break;
        }
        break;
    }
    self->state->mode = mode;
    self->state->time = 0.0f;
}
