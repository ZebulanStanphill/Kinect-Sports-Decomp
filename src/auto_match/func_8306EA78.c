extern double fn_82F68918(double x);

float fn_8306EA78(float x)
{
    float t = x * 0.15915494f;
    return (t - (float)fn_82F68918(t + 0.5f)) * 6.2831855f;
}
