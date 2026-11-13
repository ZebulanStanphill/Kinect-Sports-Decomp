extern double fn_82F65D50(double);

float fn_8306E970(float x)
{
    if (x < -1.0f) {
        x = -1.0f;
    } else if (x > 1.0f) {
        x = 1.0f;
    }
    return (float)fn_82F65D50(x);
}
