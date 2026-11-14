extern int fn_8280AB50(float a, float b, float tolerance);

int fn_82810380(const float *a, const float *b, float tolerance)
{
    return fn_8280AB50(a[0], b[0], tolerance) &&
           fn_8280AB50(a[1], b[1], tolerance) &&
           fn_8280AB50(a[2], b[2], tolerance);
}
