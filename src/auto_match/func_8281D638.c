int fn_8281D638(float *a, float *b, float radius)
{
    float r2 = radius * radius;
    int inside = (a[0] - b[0]) * (a[0] - b[0]) <= r2;
    inside &= (a[3] - b[3]) * (a[3] - b[3]) <= r2;
    inside &= (a[6] - b[6]) * (a[6] - b[6]) <= r2;
    inside &= (a[1] - b[1]) * (a[1] - b[1]) <= r2;
    inside &= (a[4] - b[4]) * (a[4] - b[4]) <= r2;
    inside &= (a[7] - b[7]) * (a[7] - b[7]) <= r2;
    inside &= (a[2] - b[2]) * (a[2] - b[2]) <= r2;
    inside &= (a[5] - b[5]) * (a[5] - b[5]) <= r2;
    inside &= (a[8] - b[8]) * (a[8] - b[8]) <= r2;
    return inside;
}
