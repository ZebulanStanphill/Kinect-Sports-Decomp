typedef struct Cond_828F4B58 {
    int taken;
    int active;
    int sawElse;
} Cond_828F4B58;

typedef struct State_828F4B58 {
    char pad0[0x38];
    Cond_828F4B58 *cond;
} State_828F4B58;

typedef struct Pre_828F4B58 {
    char pad0[0x18];
    char errors[0x38];
    int failed;
    char pad54[0xc];
    int skipping;
    char pad64[0x274 - 0x64];
    State_828F4B58 *state;
    char pad278[8];
    char location[4];
} Pre_828F4B58;

extern void fn_828FA8D8(void *errors, void *location, int code, const char *message);

long fn_828F4B58(Pre_828F4B58 *self)
{
    Cond_828F4B58 *cond = self->state->cond;

    if (cond == 0) {
        fn_828FA8D8(self->errors, self->location, 0x5e5, "unexpected #else");
        self->failed = 1;
        return 0x80004005;
    }
    if (cond->sawElse != 0) {
        fn_828FA8D8(self->errors, self->location, 0x5ea, "unexpected #else following #else");
        self->failed = 1;
        return 0x80004005;
    }
    self->skipping = cond->taken == 0 && cond->active != 0;
    cond->taken = 1;
    cond->sawElse = 1;
    return 0;
}
