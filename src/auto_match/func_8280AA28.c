extern const float lbl_8201DF54;
extern const float lbl_8201DF58;
extern const float lbl_8201DF5C;
extern const float lbl_8201DF60;
extern const float lbl_8201DF64;
extern const float lbl_8201DF70; /* smallest argument with a nonzero result */
extern const float lbl_8201DFEC; /* smallest argument that overflows */

float fn_8280AA28(float x)
{
    union {
        float f;
        int i;
    } result;

    short whole;
    float fraction;

    if (x < lbl_8201DF70) {
        return 0.0f;
    }
    if (x >= lbl_8201DFEC) {
        return 3.402823466e+38f;
    }
    whole = (short)x;
    fraction = x - (float)whole;
    if (fraction != 0.0f) {
        if (x < 0.0f) {
            whole = whole - 1;
            fraction = fraction + 1.0f;
        }
        result.f = ((((fraction * 0.0018951073f + lbl_8201DF64) * fraction + lbl_8201DF60) * fraction +
                     lbl_8201DF5C) *
                        fraction +
                    lbl_8201DF58) *
                       fraction +
                   lbl_8201DF54;
    } else {
        result.f = 1.0f;
    }
    result.i = (whole << 23) + result.i;
    return result.f;
}
