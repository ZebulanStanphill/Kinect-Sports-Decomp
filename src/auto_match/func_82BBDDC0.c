/* Packs a clamped RGB float colour into a 5:6:5 word. */
static __forceinline float Saturate(float x)
{
    return x < 0.0f ? 0.0f : (x > 1.0f ? 1.0f : x);
}

unsigned short fn_82BBDDC0(const float *color)
{
    float r = Saturate(color[0]);
    float g = Saturate(color[1]);
    float b = Saturate(color[2]);

    return (unsigned short)((((int)(r * 31.0f + 0.5f) << 6 | (int)(g * 63.0f + 0.5f)) << 5) |
                            (int)(b * 31.0f + 0.5f));
}
