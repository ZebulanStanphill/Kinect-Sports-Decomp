double __fsel(double a, double b, double c);

void fn_83059A68(float a, float b, float *out, float c)
{
    *out = (float)__fsel(b - a, c, *out);
}
