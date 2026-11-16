static __forceinline const float *Maximum_828B9180(const float *first, const float *second)
{
    return *first < *second ? second : first;
}

static __forceinline const float *Minimum_828B9180(const float *first, const float *second)
{
    return *second < *first ? second : first;
}

float fn_828B9180(char *self)
{
    float middle = *(float *)(self + 0xb0);
    float value;
    float one;
    float zero;
    if (*(float *)(self + 0xb4) + middle < 0.3f) {
        return 0.0f;
    }
    one = 1.0f;
    zero = 0.0f;
    value = ((*(float *)(self + 0xac) + *(float *)(self + 0xb4)) * 0.5f + middle) * 0.5f;
    return *Minimum_828B9180(Maximum_828B9180(&value, &zero), &one);
}
