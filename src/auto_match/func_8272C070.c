#include <math.h>

typedef struct Polar_8272C070 {
    char pad0[0x10];
    short angle;  /* 0x10 */
    short length; /* 0x12 */
    short x;      /* 0x14 */
    short y;      /* 0x16 */
} Polar_8272C070;

extern const float lbl_82011628;

void fn_8272C070(Polar_8272C070 *self)
{
    float radians;
    float cosine;
    float sine;

    radians = (float)self->angle * lbl_82011628;
    cosine = (float)cos(radians);
    self->x = (short)(self->length * cosine);
    sine = (float)sin(radians);
    self->y = (short)(self->length * sine);
}
