typedef struct Timer_823477E8 {
    char pad0[0x4];
    float duration; /* 0x4 */
    float elapsed;  /* 0x8 */
} Timer_823477E8;

extern void *lbl_8327F844;
extern void fn_825300A8(float strength, int slot);

static __forceinline float Min(float a, float b)
{
    return b - a >= 0.0f ? a : b;
}

void fn_823477E8(Timer_823477E8 *self, float dt, int player, int notify)
{
    float elapsed;

    if (self->elapsed > 0.0f) {
        elapsed = Min(self->elapsed + dt, self->duration);
        self->elapsed = elapsed;
        if (elapsed >= self->duration - 0.0001f) {
            self->elapsed = 0.0f;
            if (notify != 0 && lbl_8327F844 != 0) {
                fn_825300A8(1.0f, player % 2);
            }
        }
    }
}
