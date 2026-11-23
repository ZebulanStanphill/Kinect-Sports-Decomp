static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

static __forceinline float Min(float a, float b)
{
    return a - b >= 0.0f ? b : a;
}

void fn_8254A870(float red, float green, float blue, float *hue, float *saturation, float *value)
{
    float minimum = Min(red, green);
    float maximum = Max(red, green);
    float delta;

    maximum = Max(maximum, blue);
    minimum = Min(minimum, blue);

    *value = maximum;
    delta = maximum - minimum;
    if (maximum != 0.0f) {
        *saturation = delta / maximum;
        if (delta == 0.0f) {
            *hue = 0.0f;
            return;
        }
        if (red == maximum) {
            *hue = (green - blue) / delta;
        } else if (green == maximum) {
            *hue = (blue - red) / delta + 2.0f;
        } else {
            *hue = (red - green) / delta + 4.0f;
        }
        *hue = *hue * 60.0f;
        if (*hue < 0.0f) {
            *hue = *hue + 360.0f;
        }
    } else {
        *saturation = 0.0f;
        *hue = -1.0f;
    }
}
