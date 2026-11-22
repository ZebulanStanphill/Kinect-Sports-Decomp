#include <math.h>

extern float lbl_831E4E38;
extern float fn_82539560(float value, float inMin, float inMax, float outMin, float outMax);
extern float fn_82809950(float value);

float fn_822C6FB0(float value, float deadZone, float range)
{
    float magnitude = fabsf(value);
    float result;

    if (deadZone < magnitude && magnitude > 0.034906585f) {
        result = fn_82809950(fn_82539560(magnitude, 0.0f, range * 1.25f, 0.0f, 1.0f) * lbl_831E4E38);
        return value >= 0.0f ? result : -result;
    }
    return 0.0f;
}
