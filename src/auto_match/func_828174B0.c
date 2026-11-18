float fn_828174B0(float t, float y0, float y1, float y2, float y3, float x0, float x1, float x2, float x3)
{
    float l0 = (t - x3) * (t - x2) * (t - x1) / ((x0 - x1) * (x0 - x2) * (x0 - x3));
    float l1 = (t - x0) * (t - x3) * (t - x2) / ((x1 - x0) * (x1 - x2) * (x1 - x3));
    float l2 = (t - x0) * (t - x3) * (t - x1) / ((x2 - x0) * (x2 - x1) * (x2 - x3));
    float l3 = (t - x0) * (t - x2) * (t - x1) / ((x3 - x0) * (x3 - x1) * (x3 - x2));

    return l1 * y1 + l2 * y2 + l3 * y3 + l0 * y0;
}
