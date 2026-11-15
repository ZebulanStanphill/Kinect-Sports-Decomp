#include <math.h>
extern const float lbl_8201DF18;

float fn_82809CB8(float value)
{
    float rounded;
    if (fabsf(value) >= lbl_8201DF18)
        return value;
    rounded = (float)(__int64)value;
    if (value < 0.0f && value != rounded)
        rounded -= 1.0f;
    return rounded;
}
