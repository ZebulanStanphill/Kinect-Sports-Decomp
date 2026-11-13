double fabs(double);

extern double fn_82F65E18(double);

float fn_82CE55B8(float r)
{
    if (fabs(r) >= 1.0f) {
        return r > 0.0f ? 0.0f : 3.14159265358979f;
    }
    return (float)fn_82F65E18(r);
}
