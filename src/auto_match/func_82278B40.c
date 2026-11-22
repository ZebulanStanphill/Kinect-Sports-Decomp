/* Restarts an oscillator in mode 2 and reports whether its value is at rest (within 0.001 of zero). */
typedef struct State_82278B40 {
    float period;    /* 0x00 */
    float frequency; /* 0x04 */
    float elapsed;   /* 0x08 */
    float value;     /* 0x0c */
    int mode;        /* 0x10 */
} State_82278B40;

int fn_82278B40(State_82278B40 *self)
{
    self->elapsed = 0.0f;
    self->mode = 2;
    self->frequency = -1.0f / self->period;
    return self->value >= -0.001f && self->value <= 0.001f;
}
