typedef struct State_82423A78 {
    char reserved[0x2b20];
    unsigned int owner;
    char gap[0x10];
    float elapsed; /* 0x2b34 */
    int mode;
    int enabled;
} State_82423A78;

typedef struct Object_82423A78 {
    int unused;
    unsigned int owner;
    State_82423A78 *state;
} Object_82423A78;

extern float lbl_8218EC10;

void fn_82423A78(Object_82423A78 *self, int active)
{
    State_82423A78 *state = self->state;
    if (active) {
        if (self->owner != state->owner) {
            return;
        }
        state->mode = 1;
        state->enabled = 1;
        state->elapsed = 1.0e-5f;
    } else {
        if (self->owner != state->owner) {
            return;
        }
        state->mode = 29;
        state->enabled = 1;
        state->elapsed = 1.0e-5f;
    }
}
