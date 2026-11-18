typedef struct Timer_823ABE40 {
    char pad0[0x68];
    unsigned int active; /* 0x68 */
    char pad6c[0x8c - 0x6c];
    float remaining; /* 0x8c */
    char pad90[0x94 - 0x90];
    float elapsed; /* 0x94 */
} Timer_823ABE40;

extern const double lbl_821954B0[];

void fn_823ABE40(Timer_823ABE40 *self, float dt)
{
    float remaining;

    if (self->active > 0) {
        remaining = self->remaining - dt;
        self->elapsed = dt + self->elapsed;
        self->remaining = remaining >= 0.0 ? remaining : lbl_821954B0[0xd];
    }
}
