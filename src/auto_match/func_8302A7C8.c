extern double fn_82F65FB0(double value);

float fn_8302A7C8(double value)
{
    if (value == 0.0) {
        return 0.0f;
    }
    if (value >= 96.3f) {
        return 96.3f;
    }
    if (value <= -96.3f) {
        return -96.3f;
    }
    if (value < 0.0) {
        return (float)(fn_82F65FB0((value + 96.3) * 0.01038421599169263) * 20.0);
    }
    return -(float)(fn_82F65FB0((96.3 - value) * 0.01038421599169263) * 20.0);
}
