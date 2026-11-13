extern double fn_82F64A40(double x); /* exp */

long fn_829E5430(void *self, float value, float scale, float *out)
{
    if (!(value > 0.0f))
        return 0x80070057; /* E_INVALIDARG */
    if (!(scale > 0.0f))
        return 0x80070057;
    *out = (float)fn_82F64A40(-(value / scale));
    return 0;
}
