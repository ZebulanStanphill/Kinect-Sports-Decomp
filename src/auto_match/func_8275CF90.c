extern float __fsqrts(float value);

unsigned char fn_8275CF90(float x0, float y0, float x1, float y1, float x2, float y2, float x, float y)
{
    float dx02;
    float side12;
    float t;
    float a, b;
    int edge01, edge12, edge02;

    if (y < y0 || y >= y2)
        return 0;
    edge01 = (y1 - y0) * (x - x1) - (y - y1) * (x1 - x0) > 0.0f;
    side12 = (y2 - y1) * (x - x2) - (y - y2) * (x2 - x1);
    edge12 = side12 > 0.0f;
    dx02 = x2 - x0;
    edge02 = (y2 - y0) * (x - x2) - dx02 * (y - y2) > 0.0f;

    if (edge02 & edge12 & edge01)
        return 1;
    if ((edge02 ^ 1) & (edge12 ^ 1) & (edge01 ^ 1))
        return 0;
    a = (y0 - y1 * 2.0f) + y2;
    t = -1.0f;
    if (a == 0.0f) {
        if ((y2 - y0) != 0.0f)
            t = (y - y0) / (y2 - y0);
    } else {
        float root = 0.0f;
        float discriminant = y1 * y1 - (y2 - y) * y0;
        float twice = (y1 * y) * 2.0f;
        discriminant = (discriminant - twice) + y2 * y;
        if (discriminant > 0.0f)
            root = __fsqrts(discriminant);
        t = (root + y0 - y1) / a;
    }
    a = (x1 - x0) * t + x0;
    b = (x2 - x1) * t + x1;
    return a + (b - a) * t < x;
}
