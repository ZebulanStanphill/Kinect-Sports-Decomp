/* Converts values[index] to a signed fixed-point integer of the given bit count, rounded and clamped. */
int fn_82A6A498(const float *values, int unused, int bits, int index)
{
    int scale = 1 << (bits - 1);
    float value = values[index] * (float)scale;
    int result;
    int limit;

    if (value < 0.0f) {
        result = (int)(value - 0.5f);
        limit = ~(scale - 1);
        if (result >= limit) {
            return result;
        }
        return limit;
    }
    result = (int)(value + 0.5f);
    limit = scale - 1;
    if (result <= limit) {
        return result;
    }
    return limit;
}
