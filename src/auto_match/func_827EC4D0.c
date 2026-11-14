float fn_827EC4D0(float x, float lo, float hi)
{
    float d;
    if (x < lo) {
        d = x - lo;
        return d * d;
    }
    if (x > hi) {
        d = x - hi;
        return d * d;
    }
    return 0.0f;
}
