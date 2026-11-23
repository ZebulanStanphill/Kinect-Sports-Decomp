extern double fabs(double value);

typedef struct Steer_822E6610 {
    char pad0[0x260];
    float speed; /* 0x260 */
} Steer_822E6610;

/* Steering tuning table: [24] dead zone, [25] gain, [26] decay, [27] time scale, [28] time gain. */
extern float lbl_831D14D8[64];

extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

float fn_822E6610(Steer_822E6610 *self, float input, float dt)
{
    float deadZone;
    float magnitude;
    float speed;
    float sign;
    float boost;
    float push;
    float decay;

    deadZone = lbl_831D14D8[24];
    magnitude = (float)fabs(input);
    if (magnitude >= deadZone) {
        if ((input > 0.0f) != (self->speed > 0.0f)) {
            self->speed = 0.0f;
        }
        speed = self->speed;
        if (speed < -1.0e-05f || speed > 1.0e-05f) {
            sign = input >= 0.0f ? 1.0f : -1.0f;
            push = fn_82539560(magnitude, lbl_831D14D8[24], 1.0f, 0.0f, lbl_831D14D8[25]) * sign;
            boost = fn_82539560(dt, lbl_831D14D8[27], 1.0f, 0.0f, lbl_831D14D8[28]) * sign;
            speed = boost + push + speed;
            speed = speed - -1.0f >= 0.0f ? speed : -1.0f;
            self->speed = speed - 1.0f >= 0.0f ? 1.0f : speed;
        } else {
            self->speed = (input >= 0.0f ? 1.0f : -1.0f) * 0.0001f;
        }
    } else {
        speed = self->speed;
        if (speed != 0.0f) {
            decay = fn_82539560(magnitude, 0.0f, deadZone, -lbl_831D14D8[26], 0.0f);
            decay = decay * (speed >= 0.0f ? 1.0f : -1.0f) + speed;
            if ((speed > 0.0f) == (decay > 0.0f)) {
                self->speed = decay;
            } else {
                self->speed = 0.0f;
            }
        }
    }
    return self->speed;
}
