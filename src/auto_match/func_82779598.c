typedef struct Color_82779598 {
    unsigned char a; /* 0x0 */
    unsigned char r; /* 0x1 */
    unsigned char g; /* 0x2 */
    unsigned char b; /* 0x3 */
} Color_82779598;

void fn_82779598(const Color_82779598 *color, float *hue, float *saturation, float *value)
{
    float r = color->r == 0 ? 0.0f : color->r * 0.003921569f;
    float g = color->g == 0 ? 0.0f : color->g * 0.003921569f;
    float b = color->b == 0 ? 0.0f : color->b * 0.003921569f;
    float lowest;
    float highest;
    float smaller;
    float larger;
    float delta;

    smaller = g < b ? g : b;
    lowest = r < smaller ? r : smaller;
    larger = b < g ? g : b;
    highest = larger < r ? r : larger;
    *value = highest;
    delta = highest - lowest;
    if (highest != 0.0f) {
        *saturation = delta / highest;
        if (*saturation != 0.0f) {
            if (r == highest) {
                *hue = (g - b) / delta;
            } else if (g == highest) {
                *hue = (b - r) / delta + 2.0f;
            } else {
                *hue = (r - g) / delta + 4.0f;
            }
            *hue *= 0.16666666666666666;
            if (*hue < 0.0f) {
                *hue = *hue + 1.0;
            }
            if (*hue > 1.0f) {
                *hue = *hue - 1.0;
            }
            return;
        }
    } else {
        *saturation = 0.0f;
    }
    *hue = 0.0f;
}
