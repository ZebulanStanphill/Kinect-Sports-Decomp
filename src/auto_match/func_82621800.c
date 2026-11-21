extern float fn_82587C30(float a, float b);

float fn_82621800(float a, float b, float rate, float t)
{
    float s = rate * 300.0f;
    float one = 1.0f;
    return (one - fn_82587C30(one - t, s)) * (b - a) + a;
}
