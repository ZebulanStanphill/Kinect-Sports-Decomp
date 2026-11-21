typedef struct Curve_82802150 {
    unsigned int points[4]; /* 0x00 */
} Curve_82802150;

void fn_82802150(Curve_82802150 *curve, float t, float scale, float offset, float *out)
{
    float p0;
    float p1;
    float p2;
    float p3;
    float a;
    float b;
    float c;

    p0 = ((float)curve->points[0] + offset) * scale;
    p1 = ((float)curve->points[1] + offset) * scale;
    p2 = ((float)curve->points[2] + offset) * scale;
    p3 = ((float)curve->points[3] + offset) * scale;
    a = (1.5f * p1 - 1.5f * p2) + (0.5f * p3 - 0.5f * p0);
    b = (p0 - 2.5f * p1) + (2.0f * p2 - 0.5f * p3);
    c = 0.5f * p2 - 0.5f * p0;
    *out = ((a * t + b) * t + c) * t + p1;
}
