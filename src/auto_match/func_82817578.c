extern float fn_828171F8(unsigned int count, float t, unsigned short *prev, unsigned short *cur,
                         unsigned short *next, unsigned short *after, int loop);

float fn_82817578(unsigned int count, float t, float *values, int loop)
{
    unsigned short prev;
    unsigned short cur;
    unsigned short next;
    unsigned short after;
    float p0;
    float p1;
    float p2;
    float p3;
    float d;
    float a;
    float b;
    float c;

    t = fn_828171F8(count, t, &prev, &cur, &next, &after, loop);
    p3 = values[after];
    p2 = values[next];
    p1 = values[cur];
    p0 = values[prev];
    d = p2 - p1;
    a = ((p3 - p0) - d) * 0.5f - d;
    b = (d * 2.0f + p0) - (p1 + p3) * 0.5f;
    c = (p2 - p0) * 0.5f;
    return ((a * t + b) * t + c) * t + p1;
}
