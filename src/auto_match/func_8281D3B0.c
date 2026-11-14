int fn_8281D3B0(float *a, float *b, float radius)
{
    float r2 = radius * radius;
    int inside = (a[0] - b[0]) * (a[0] - b[0]) <= r2;
    inside &= (a[1] - b[1]) * (a[1] - b[1]) <= r2;
    inside &= (a[2] - b[2]) * (a[2] - b[2]) <= r2;
    inside &= (a[3] - b[3]) * (a[3] - b[3]) <= r2;
    return inside;
}
