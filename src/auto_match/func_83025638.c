extern const float lbl_8201DD70;
extern const float lbl_821660D0;
extern const float lbl_82015468;
extern double fn_82F65018(double y, double x);
extern double __fsel(double test, double positive, double negative);

void fn_83025638(float x, float y, float *out)
{
    float zero = 0.0f;
    if (x == zero) {
        *out = (float)__fsel(y, lbl_8201DD70, lbl_821660D0);
    } else {
        *out = (float)fn_82F65018(y, x);
        if (*out < zero) {
            *out += lbl_82015468;
        }
    }
}
