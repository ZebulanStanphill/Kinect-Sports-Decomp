/* atan2(y, x) with a polynomial approximation of atan on [0, 1]. */
double fabs(double x);

extern const float lbl_8201DD70; /* pi / 2 */
extern const float lbl_8201DF1C;
extern const float lbl_8201DF20;
extern const float lbl_8201DF28;
extern const float lbl_8201DF2C;
extern const float lbl_8201DF30;
extern const float lbl_8201DF34;

float fn_82809D40(float y, float x)
{
    float ay;
    float ax;
    float a;
    float a2;
    float result;

    if (y == 0.0f && x == 0.0f) {
        return 0.0f;
    }
    ay = (float)fabs(y);
    ax = (float)fabs(x);
    if (ax > ay) {
        a = ay / ax;
        a2 = a * a;
        result = ((((((a2 * 0.0066582896f - lbl_8201DF34) * a2 + lbl_8201DF30) * a2 - lbl_8201DF2C) * a2 +
                    lbl_8201DF28) *
                       a2 -
                   lbl_8201DF20) *
                      a2 +
                  lbl_8201DF1C) *
                 a;
    } else {
        a = ax / ay;
        a2 = a * a;
        result = lbl_8201DD70 -
                 ((((((a2 * 0.0066582896f - lbl_8201DF34) * a2 + lbl_8201DF30) * a2 - lbl_8201DF2C) * a2 +
                    lbl_8201DF28) *
                       a2 -
                   lbl_8201DF20) *
                      a2 +
                  lbl_8201DF1C) *
                     a;
    }
    if (x < 0.0f) {
        if (y < 0.0f) {
            return result - 3.14159265f;
        }
        return 3.14159265f - result;
    }
    if (y < 0.0f) {
        return -result;
    }
    return result;
}
