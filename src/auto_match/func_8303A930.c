extern double fn_82F655D8(double x, double y);
extern float lbl_8217D358;
extern float lbl_820BC500;
extern double lbl_8217D350;
extern float lbl_8217D34C;
extern float lbl_8217D348;
extern float lbl_8217D344;
extern float lbl_8217D340;
extern float lbl_8217D33C;

int fn_8303A930(float x, unsigned char alt, float *out)
{
    int ok = 0;

    if (!alt) {
        if (x > 0.1f) {
            if (x < 30.0f) {
                *out = (30.0f - x) * lbl_8217D358 + lbl_820BC500;
            } else {
                *out = (float)fn_82F655D8(lbl_8217D350, 100.0f - x) * lbl_8217D34C;
            }
            if (*out >= lbl_8217D348) {
                ok = 1;
            }
        } else {
            ok = 1;
        }
    } else {
        if (x <= 0.1f) {
            ok = 1;
        } else {
            float v = lbl_8217D340 - x * 1.865f;
            float limit = lbl_8217D33C;
            *out = v;
            if (!(v < limit)) {
                ok = 1;
            }
        }
    }
    return ok;
}
