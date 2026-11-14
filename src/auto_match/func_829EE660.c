void fn_829EE660(const float *y, const float *x, float *out, float a, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        *out++ = *x++ * a + *y++;
    }
}
