/* Blends two colour channel values by weight and returns the result clamped to a byte. */
unsigned char fn_8254A748(float to, float from, float weight)
{
    float value = (1.0f - weight) * from + to * weight;

    value = value >= 0.0f ? value : 0.0f;
    value = value - 255.0f >= 0.0f ? 255.0f : value;
    return (unsigned char)value;
}
