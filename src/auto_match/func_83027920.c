extern float fn_8301E4B8(float x);
extern const float lbl_820145F8;

float fn_83027920(float x)
{
    float y;

    if (x > 0.0f) {
        y = fn_8301E4B8(-x);
        if (y > 0.0f)
            return 1.0f / y;
        return lbl_820145F8;
    }
    return fn_8301E4B8(x);
}
