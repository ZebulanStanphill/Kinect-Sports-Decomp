void fn_82810240(float *a, float *b, float *out)
{
    float az = a[2];
    float bx = b[0];
    float bz = b[2];
    float ax = a[0];
    float by = b[1];
    float ay = a[1];
    out[1] = bx * az - ax * bz;
    out[0] = ay * bz - by * az;
    out[2] = by * ax - ay * bx;
}
