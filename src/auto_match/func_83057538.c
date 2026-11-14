double __fsel(double a, double b, double c);

void fn_83057538(float a, float b, float *out, float c)
{
    *out = (float)__fsel(a - b, *out, c);
}
