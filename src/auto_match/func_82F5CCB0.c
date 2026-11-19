typedef struct Timer_82F5CCB0 {
    char pad0[0x10];
    float value10; /* 0x10 */
    int active;    /* 0x14 */
    char pad18[0x20 - 0x18];
    float elapsed; /* 0x20 */
    float start;   /* 0x24 */
    char pad28[0x2c - 0x28];
    float value2c; /* 0x2c */
    int pending;   /* 0x30 */
    char pad34[0x38 - 0x34];
    int expired;     /* 0x38 */
    float time;      /* 0x3c */
    int resetOnIdle; /* 0x40 */
} Timer_82F5CCB0;

extern float lbl_83263168;
extern float lbl_83263170;

static __forceinline void Reset(Timer_82F5CCB0 *timer)
{
    timer->value10 = 0.0f;
    timer->pending = 0;
    timer->elapsed = 0.0f;
    timer->active = 1;
    timer->start = 0.0f;
    timer->value2c = 0.0f;
}

int fn_82F5CCB0(Timer_82F5CCB0 *timer, float dt)
{
    int result = 0;

    timer->time += dt;
    if (timer->time > lbl_83263168) {
        result = 1;
        timer->expired = 1;
    } else if (timer->resetOnIdle != 0) {
        Reset(timer);
        result = 0;
    }
    if (timer->pending > 0) {
        timer->elapsed += dt;
        if (timer->elapsed - timer->start > lbl_83263170) {
            Reset(timer);
        }
    }
    return result;
}
