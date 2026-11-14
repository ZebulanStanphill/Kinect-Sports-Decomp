float fn_8301E2A0(float from, float to, float t)
{
    if (t <= 0.0f) {
        return from;
    }
    if (t >= 1.0f) {
        return to;
    }
    return (to - from) * t + from;
}
