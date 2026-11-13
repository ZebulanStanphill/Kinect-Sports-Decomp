extern float fn_828094D0(float x);

float fn_8284DC60(float angle, float len)
{
    float r = len / (fn_828094D0(angle * 0.5f) * 2.0f);
    return r * r;
}
