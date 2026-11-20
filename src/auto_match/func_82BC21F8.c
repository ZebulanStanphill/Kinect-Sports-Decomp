/* Converts a float to a signed fixed-point value with intBits integer and fracBits fraction bits. */
int fn_82BC21F8(float value, int intBits, int fracBits)
{
    float maximum = (float)(1 << (intBits - 1)) - 1.0f / (float)(1 << (fracBits - 1));
    float minimum = (float)(-1 << (intBits - 1));

    if (value > maximum) {
        value = maximum;
    }
    if (value < minimum) {
        value = minimum;
    }
    return (int)((float)(1 << fracBits) * value);
}
