extern const float lbl_820957E0[72];
extern const float lbl_82095900[62];

float fn_82A7C8B8(int exponent)
{
    if (exponent <= 0) {
        if (exponent < -72) {
            exponent = -71;
        }
        return lbl_820957E0[-exponent] / (float)(1 << (-exponent >> 2));
    }
    if (exponent >= 62) {
        exponent = 62;
    }
    return (float)(1 << (exponent >> 2)) * lbl_82095900[exponent - 1];
}
