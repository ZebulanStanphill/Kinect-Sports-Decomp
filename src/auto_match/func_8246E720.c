typedef struct Self_8246E720 {
    char pad0[0x18];

    union {
        float value;
        unsigned int bits;
    } timer; /* 0x18 */

    char pad1c[0x440 - 0x1c];
    void *owner; /* 0x440 */
} Self_8246E720;

/* int as the caller sees it (no clrlwi after the call); its own unit (unsigned char) compiles the
   same with int. */
extern int fn_82465328(void *owner);

/* Raises the timer to at least value (but at least dt plus a small margin), then counts it down by
   dt; returns 1 when it has just run out. */
int fn_8246E720(Self_8246E720 *self, float dt, int extend, float value)
{
    float timer;

    if (self->timer.value > 0.0f && extend != 0 && fn_82465328(self->owner) != 0) {
        timer = self->timer.value;
        timer = value - timer >= 0.0f ? value : timer;
        self->timer.value = timer - (dt + 0.001f) >= 0.0f ? timer : dt + 0.001f;
    }
    if (self->timer.bits != 0) {
        timer = self->timer.value - dt;
        timer = -timer >= 0.0f ? 0.0f : timer;
        self->timer.value = timer;
        if (timer == 0.0f) {
            return 1;
        }
    }
    return 0;
}
