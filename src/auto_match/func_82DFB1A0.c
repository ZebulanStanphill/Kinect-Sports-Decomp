typedef struct Response_82DFB1A0 {
    int reserved00[2]; /* 0x00 */
    float threshold;   /* 0x08 */
    float slope;       /* 0x0c */
    float deadzone;    /* 0x10 */
} Response_82DFB1A0;

extern double fabs(double);

float fn_82DFB1A0(Response_82DFB1A0 *self, void *context, void *body, const float *input)
{
    float value = input[2];
    float magnitude = (float)fabs(value);
    float sign;
    if (magnitude < self->deadzone) {
        return 0.0f;
    }
    if (value > 0.0f) {
        sign = 1.0f;
    } else {
        sign = -1.0f;
    }
    if (magnitude < self->threshold) {
        return (magnitude - self->deadzone) * self->slope * sign;
    } else {
        float range = self->threshold - self->deadzone;
        float base = self->slope * range;
        return (((1.0f - base) / ((1.0f - self->deadzone) - range)) * (magnitude - self->threshold) + base) *
               sign;
    }
}
