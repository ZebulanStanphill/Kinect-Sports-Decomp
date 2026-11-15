extern double fn_82F6B2A8(double);
extern double fn_82F68918(double);

void fn_83004190(short *out, float value)
{
    float scaled = value * 10.0f;
    float rounded;
    if (scaled < 0.0f) {
        rounded = (float)fn_82F6B2A8(scaled - 0.5f);
    } else {
        rounded = (float)fn_82F68918(scaled + 0.5f);
    }
    *out = (short)rounded;
}
