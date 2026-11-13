extern float lbl_8201DD70; /* pi/2 */
extern float lbl_8201DF4C; /* -pi/2 */
extern float lbl_8201DF48;
extern float lbl_8201DF44;
extern float lbl_8201DF40;
extern float lbl_8201DF3C;

extern double sqrt(double);

float fn_82809730(float x)
{
    float x2;
    float t;

    if (x > 1.0f) {
        return lbl_8201DD70;
    }
    if (x < -1.0f) {
        return lbl_8201DF4C;
    }
    x2 = x * x;
    if (x2 <= 0.25f) {
        return x * ((((x2 * 0.0531649627f + lbl_8201DF48) * x2 + lbl_8201DF44) * x2 + lbl_8201DF40) * x2 + lbl_8201DF3C);
    }
    if (x > 0.5f) {
        t = 0.5f - x * 0.5f;
        return lbl_8201DD70 - (float)sqrt(t) * ((((t * 0.0531649627f + lbl_8201DF48) * t + lbl_8201DF44) * t + lbl_8201DF40) * t + lbl_8201DF3C) * 2.0f;
    }
    t = (x + 1.0f) * 0.5f;
    return (float)sqrt(t) * ((((t * 0.0531649627f + lbl_8201DF48) * t + lbl_8201DF44) * t + lbl_8201DF40) * t + lbl_8201DF3C) * 2.0f - lbl_8201DD70;
}
