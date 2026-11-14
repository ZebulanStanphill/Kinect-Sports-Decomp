int fn_82811738(float *a, float *b, float radius)
{
    float r2 = radius * radius;
    int inX = (a[0] - b[0]) * (a[0] - b[0]) <= r2;
    int inY = (a[1] - b[1]) * (a[1] - b[1]) <= r2;
    return inY & inX;
}
