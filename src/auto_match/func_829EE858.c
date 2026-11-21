#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern void fn_829F1960(int *x, int *y, __vector4 position);

extern const float lbl_82015BD0; /* screen centre x */
extern const float lbl_82015BD8; /* screen centre y */
extern const float lbl_82079F20; /* 1 / half height */
extern const float lbl_82079F24; /* 1 / half width */
extern int lbl_83218B9C;

int fn_829EE858(const __vector4 *position)
{
    float threshold;
    int x;
    int y;

    if (lbl_83218B9C != 0)
        threshold = 0.25f;
    else
        threshold = 0.35f;
    x = 0;
    y = 0;
    fn_829F1960(&x, &y, *position);
    return lbl_83218B9C = 1.0f - fabsf(((float)x - lbl_82015BD0) * lbl_82079F24) >= threshold &&
                          1.0f - fabsf(((float)y - lbl_82015BD8) * lbl_82079F20) >= threshold;
}
