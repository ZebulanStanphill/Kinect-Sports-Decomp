typedef struct Fade_8261D758 {
    void *target; /* 0x0 */
    char pad4[0x10];
    float delay;    /* 0x14 */
    float elapsed;  /* 0x18 */
    float duration; /* 0x1c */
} Fade_8261D758;

extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern void fn_8252AFE0(void *target, float alpha);

void fn_8261D758(Fade_8261D758 *self)
{
    float amount;
    int alpha;

    amount = self->delay <= 0.0f ? fn_82539560(self->elapsed, self->duration, 0.0f, 0.0f, 1.0f) : 0.0f;
    if (amount > 0.0f) {
        alpha = 0xff - (int)(amount * 255.0f);
        if (alpha < 0) {
            alpha = 0;
        }
        if (alpha >= 0xff) {
            alpha = 0xff;
        }
        fn_8252AFE0(self->target, (float)(unsigned char)alpha);
    }
}
