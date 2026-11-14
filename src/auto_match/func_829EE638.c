void fn_829EE638(const float *x, float *out, float a, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        *out++ = *x++ * a;
    }
}
