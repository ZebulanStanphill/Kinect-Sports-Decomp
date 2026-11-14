extern float fn_82809CB0(float x);

float fn_827EDE70(float a, float b, float target)
{
    return fn_82809CB0(a - target) < fn_82809CB0(b - target) ? a : b;
}
