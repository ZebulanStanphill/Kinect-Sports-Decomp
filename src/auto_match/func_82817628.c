extern float fn_828171F8(unsigned int count, float t, unsigned short *prev, unsigned short *cur,
                         unsigned short *next, unsigned short *after, int loop);

float fn_82817628(unsigned int count, float t, float *values, int loop)
{
    unsigned short prev;
    unsigned short cur;
    unsigned short next;
    unsigned short after;
    float p0;
    float p1;
    float p2;
    float p3;
    float a;
    float b;
    float c;
    float d;
    float p0Sixth;

    t = fn_828171F8(count, t, &prev, &cur, &next, &after, loop);
    p2 = values[next];
    p1 = values[cur];
    p0 = values[prev];
    p3 = values[after];
    p0Sixth = p0 * (1.0f / 6.0f);
    a = p3 * (1.0f / 6.0f) + (p1 * 0.5f - p2 * 0.5f) - p0Sixth;
    b = (p0 * 0.5f - p1) + p2 * 0.5f;
    c = p2 * 0.5f - p0 * 0.5f;
    d = p1 * (2.0f / 3.0f) + p2 * (1.0f / 6.0f) + p0Sixth;
    return ((a * t + b) * t + c) * t + d;
}
