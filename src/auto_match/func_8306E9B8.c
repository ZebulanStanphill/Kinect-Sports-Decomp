extern double fn_82F65E18(double);

float fn_8306E9B8(float x)
{
    if (x < -1.0f) {
        x = -1.0f;
    } else if (x > 1.0f) {
        x = 1.0f;
    }
    return (float)fn_82F65E18(x);
}
