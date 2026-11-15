extern float lbl_831BD2E4;
extern float lbl_831BD2E8;
extern const float lbl_821347B0;
extern double __fsel(double, double, double);

typedef struct State_830A45F8 {
    int reserved;
    float offset; /* 0x4 */
    int reserved8[2];
    float value; /* 0x10 */
} State_830A45F8;

float fn_830A45F8(State_830A45F8 *self, float target, float time)
{
    float value = self->value;
    float delta = target - value;
    float limit = lbl_831BD2E4 * time;
    float correction = -self->offset - delta;
    float negativeDamping = -lbl_831BD2E8;
    float damping = negativeDamping * value;
    float step = (float)__fsel(damping - limit, limit, damping);
    float result = step + value;
    delta = delta - step;
    if (correction > step * 2.0f + limit) {
        result = result - correction;
        delta = correction + delta;
    }
    self->value = (float)__fsel(result - lbl_821347B0, lbl_821347B0, result);
    return delta;
}
