#include "xdk/vectorintrinsics.h"

double tan(double);

extern unsigned int lbl_83218DD4;
extern float lbl_83218DD0;
extern const double lbl_8207F260;

static const float halfWidth = 40.0f;

void fn_829FCF78(__vector4 position, int *x, int *y)
{
    if ((lbl_83218DD4 & 1) == 0) {
        lbl_83218DD4 |= 1;
        lbl_83218DD0 = halfWidth / (float)tan(lbl_8207F260);
    }
    *x = (int)(lbl_83218DD0 * position.vector4_f32[0] / position.vector4_f32[2] + halfWidth);
    *y = (int)(30.0f - lbl_83218DD0 * position.vector4_f32[1] / position.vector4_f32[2]);
}
