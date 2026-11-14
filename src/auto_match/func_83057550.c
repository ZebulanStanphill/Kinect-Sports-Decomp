double __fsel(double a, double b, double c);

void fn_83057550(float a, float b, float *out, float c)
{
    *out = (float)__fsel(b - a, c, *out);
}
