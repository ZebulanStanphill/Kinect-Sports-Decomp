/* Current strength of a decaying effect: the amplitude, swung by a sine
 * while the ramp-up time has not elapsed, fading out quadratically over the
 * duration; zero when the effect is inactive. */
typedef struct Effect_825CABA8 {
    char pad00[0x2C];
    int active; /* 0x2C */
    char pad30[0x8];
    float amplitude; /* 0x38 */
    char pad3C[0x4];
    float duration; /* 0x40 */
    float time;     /* 0x44 */
    float rampTime; /* 0x48 */
} Effect_825CABA8;

extern double sin(double x);

float fn_825CABA8(Effect_825CABA8 *self)
{
    float scale;
    float ramp;
    float fade;
    float wave;

    if (self->active != 0) {
        scale = self->amplitude;
        if (self->time < self->rampTime) {
            ramp = self->time / self->rampTime;
            wave = -(float)sin(4.712389f * ramp);
            scale = wave * ramp * scale;
        }
        fade = self->time / self->duration;
        return (1.0f - fade * fade) * scale;
    }
    return 0.0f;
}
