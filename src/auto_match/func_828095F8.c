extern float lbl_8201DD70; /* pi/2 */
extern float lbl_82002C28;
extern float lbl_8201DF48;
extern float lbl_8201DF44;
extern float lbl_8201DF40;
extern float lbl_8201DF3C;

extern double sqrt(double);

float fn_828095F8(float x)
{
    float x2;
    float t;

    if (x > 1.0f) {
        return 0.0f;
    }
    if (x < -1.0f) {
        return 3.14159274f;
    }
    x2 = x * x;
    if (x2 <= lbl_82002C28) {
        return lbl_8201DD70 - x * ((((x2 * 0.0531649627f + lbl_8201DF48) * x2 + lbl_8201DF44) * x2 + lbl_8201DF40) * x2 + lbl_8201DF3C);
    }
    if (x > 0.5f) {
        t = 0.5f - x * 0.5f;
        return (float)sqrt(t) * ((((t * 0.0531649627f + lbl_8201DF48) * t + lbl_8201DF44) * t + lbl_8201DF40) * t + lbl_8201DF3C) * 2.0f;
    }
    t = (x + 1.0f) * 0.5f;
    return 3.14159274f - (float)sqrt(t) * ((((t * 0.0531649627f + lbl_8201DF48) * t + lbl_8201DF44) * t + lbl_8201DF40) * t + lbl_8201DF3C) * 2.0f;
}
