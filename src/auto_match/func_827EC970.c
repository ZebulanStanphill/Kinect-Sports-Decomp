static __forceinline float SquaredDistance_827EC970(float position, float low, float high)
{
    if (position < low) {
        position -= low;
        return position * position;
    } else if (position > high) {
        position -= high;
        return position * position;
    } else {
        return 0.0f;
    }
    return position * position;
}

int fn_827EC970(const float *center, float radius, const float *low, const float *high)
{
    float first = SquaredDistance_827EC970(center[0], low[0], high[0]);
    float second = SquaredDistance_827EC970(center[1], low[1], high[1]);
    float third = SquaredDistance_827EC970(center[2], low[2], high[2]);
    return third + second + first <= radius * radius;
}
