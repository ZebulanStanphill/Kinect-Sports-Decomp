/* do the three 2-D cross products of (a,b), (c,d), (e,f) all share one sign,
   with the first one largest in magnitude */
int fn_827EC748(float a, float b, float c, float d, float e, float f)
{
    float ad = a * d - b * c;
    float af = a * f - b * e;
    float de = d * e - c * f;
    if (ad < 0.0f) {
        if (af < ad || de < ad || af > 0.0f || de > 0.0f) {
            return 0;
        }
    } else {
        if (af > ad || de > ad || af < 0.0f || de < 0.0f) {
            return 0;
        }
    }
    return 1;
}
