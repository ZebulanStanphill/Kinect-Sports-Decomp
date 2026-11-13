extern double fn_82F68918(double x); /* floor */
extern double fn_82F6B2A8(double x); /* ceil */

float fn_8305FD58(const float *step, float value)
{
    float x = value / *step;
    float r = (float)fn_82F68918(x);

    return x - r >= 0.5f ? (float)fn_82F6B2A8(x) : r;
}
