float fn_8306B5F0(const float *a, const float *b)
{
    float d0 = a[0] - b[0];
    float d1 = a[1] - b[1];
    float d2 = a[2] - b[2];
    float d3 = a[3] - b[3];
    return d0 * d0 + d1 * d1 + d2 * d2 + d3 * d3;
}
