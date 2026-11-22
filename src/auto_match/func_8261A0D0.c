extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

unsigned int fn_8261A0D0(int count, int index)
{
    float t = (float)(count - index - 1) / (float)(count - 1);
    float boost = t * 1.6f;
    float fade = fn_82539560(t, 0.9f, 1.0f, 1.0f, 0.0f);
    float level = boost - 1.0f >= 0.0f ? 1.0f : boost;

    return ((unsigned int)(unsigned char)(fade * level * 255.0f) << 24) | 0xffffff;
}
