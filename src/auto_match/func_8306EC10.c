extern double cos(double x);

float fn_8306EC10(float x)
{
    if (x < 0.0f) {
        x = 0.0f;
    } else if (x > 1.0f) {
        x = 1.0f;
    }
    return 0.5f - (float)cos(3.14159274f * x) * 0.5f;
}
