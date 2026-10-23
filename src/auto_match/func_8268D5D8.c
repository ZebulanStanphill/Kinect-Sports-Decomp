void fn_8268D5D8(float *a, float *b)
{
    float s0 = a[0], s1 = a[2], s2 = a[4], s3 = a[6];
    a[1] = b[1] * s0 + a[1];
    a[3] = b[3] * s1 + a[3];
    a[5] = b[5] * s2 + a[5];
    a[7] = b[7] * s3 + a[7];
    a[0] = b[0] * s0;
    a[2] = b[2] * s1;
    a[4] = b[4] * s2;
    a[6] = b[6] * s3;
}
