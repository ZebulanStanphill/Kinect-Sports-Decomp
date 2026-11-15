static __forceinline const float *Maximum_828B9208(const float *first, const float *second)
{
    return *first < *second ? second : first;
}

static __forceinline const float *Minimum_828B9208(const float *first, const float *second)
{
    return *second < *first ? second : first;
}

void fn_828B9208(char *self, float value)
{
    float one = 1.0f;
    float zero = 0.0f;
    *(float *)(self + 0xb0) = *Minimum_828B9208(Maximum_828B9208(&value, &zero), &one);
}
