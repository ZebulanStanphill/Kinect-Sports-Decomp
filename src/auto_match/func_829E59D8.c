extern const float lbl_82057B9C; /* 1.0f */

int fn_829E59D8(unsigned int *self, float scale, float value, float limit, float divisor, int *out)
{
    float ratio;
    float high;
    float low;
    unsigned char exceeds;

    if (divisor <= 0.0f) {
        return 0x8000ffff;
    }
    if (out == 0) {
        return 0x80070057;
    }
    if (*self == 0) {
        return 0x8000ffff;
    }
    exceeds = 0;
    ratio = (value / divisor) * scale;
    high = limit > ratio ? limit : ratio;
    low = limit < ratio ? limit : ratio;
    low = low > lbl_82057B9C ? low : lbl_82057B9C;
    if (high / low - lbl_82057B9C > lbl_82057B9C) {
        exceeds = 1;
    }
    *out = exceeds;
    return 0;
}
