extern const float lbl_820F3D88[72];
extern const float lbl_820F3EA8[62];

float fn_82C3F530(int exponent)
{
    if (exponent <= 0) {
        if (exponent < -72) {
            exponent = -71;
        }
        return lbl_820F3D88[-exponent] / (float)(1 << (-exponent >> 2));
    }
    if (exponent >= 62) {
        exponent = 62;
    }
    return (float)(1 << (exponent >> 2)) * lbl_820F3EA8[exponent - 1];
}
