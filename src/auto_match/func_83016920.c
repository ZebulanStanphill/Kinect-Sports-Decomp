typedef struct Curve_83016920 Curve_83016920;

typedef struct Easing_83016920 {
    char pad0[0x8];
    Curve_83016920 *slow;   /* 0x08 */
    Curve_83016920 *medium; /* 0x0c */
    Curve_83016920 *fast;   /* 0x10 */
} Easing_83016920;

extern float fn_8302A5B8(Curve_83016920 *curve, float x);

/* Interpolates from start to end at time t (0..1) along the curve the mode picks: modes 0-2 ease
   out, 3 and 5 ease in and out, 4 is linear, 6-8 ease in. */
float fn_83016920(Easing_83016920 *self, float t, float start, float end, unsigned int mode)
{
    float amount = 0.0f;

    switch (mode) {
    case 4:
        amount = t;
        break;
    case 6:
        amount = fn_8302A5B8(self->slow, t);
        break;
    case 7:
        amount = fn_8302A5B8(self->medium, t);
        break;
    case 8:
        amount = fn_8302A5B8(self->fast, t);
        break;
    case 2:
        amount = 1.0f - fn_8302A5B8(self->slow, 1.0f - t);
        break;
    case 1:
        amount = 1.0f - fn_8302A5B8(self->medium, 1.0f - t);
        break;
    case 0:
        amount = 1.0f - fn_8302A5B8(self->fast, 1.0f - t);
        break;
    case 5:
        if (t < 0.5f) {
            amount = fn_8302A5B8(self->medium, t * 2.0f) * 0.5f;
        } else {
            amount = ((1.0f - fn_8302A5B8(self->medium, 1.0f - (t - 0.5f) * 2.0f)) * 0.5f) + 0.5f;
        }
        break;
    case 3:
        if (t < 0.5f) {
            amount = (1.0f - fn_8302A5B8(self->medium, 1.0f - t * 2.0f)) * 0.5f;
        } else {
            amount = (fn_8302A5B8(self->medium, (t - 0.5f) * 2.0f) * 0.5f) + 0.5f;
        }
        break;
    }
    return start + (end - start) * amount;
}
