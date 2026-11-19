/* Havok: approximate atan2(y, x) with a cubic polynomial on [0, 1]. */
double fabs(double x);
extern const float lbl_82132CE0; /* 0.0935228f */
extern const float lbl_8201DD70; /* pi / 2 */

float fn_82CECE68(float y, float x)
{
    float fy = (float)fabs(y);
    float fx = (float)fabs(x);
    float a;
    float a2;
    float result;

    if (fy <= fx) {
        a = fy / (fx + 1.1920929e-7f);
        a2 = a * a;
        result = (a - a2 * 0.121079f) - (a2 * a) * lbl_82132CE0;
    } else {
        a = fx / (fy + 1.1920929e-7f);
        a2 = a * a;
        result = lbl_8201DD70 - ((a - a2 * 0.121079f) - (a2 * a) * lbl_82132CE0);
    }
    if (x < 0.0f) {
        result = 3.14159265f - result;
    }
    if (y < 0.0f) {
        return -result;
    }
    return result;
}
