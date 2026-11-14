/* do the three 2-D cross products of (a,b), (c,d), (e,f) share one sign,
   with the first one at least the sum of the other two */
int fn_827EC538(float a, float b, float c, float d, float e, float f)
{
    float ad = a * d - b * c;
    float af = a * f - b * e;
    float de = d * e - c * f;
    if (ad < 0.0f) {
        if (de + af < ad || af > 0.0f || de > 0.0f) {
            return 0;
        }
    } else {
        if (de + af > ad || af < 0.0f || de < 0.0f) {
            return 0;
        }
    }
    return 1;
}
