extern const float lbl_82005C8C; /* result for arguments <= 0 */
extern const float lbl_8201DF74;
extern const float lbl_8201DF78;
extern const float lbl_8201DF7C;
extern const float lbl_8201DF80;
extern const float lbl_8201DF84;
extern const float lbl_8201DF88;
extern const float lbl_8201DF8C;
extern const float lbl_8201DF90;

/* Fast base-2 logarithm: the exponent plus a polynomial in the mantissa. */
float fn_8280A958(float x)
{
    union {
        float f;
        int i;
    } mantissa;

    float m;
    float poly;
    short exponent;

    if (x <= 0.0f) {
        return lbl_82005C8C;
    }
    mantissa.i = (*(unsigned int *)&x & 0x7fffff) | 0x3f800000;
    m = mantissa.f - 1.0f;
    exponent = (short)(((*(unsigned int *)&x >> 23) & 0xff) - 127);
    poly = lbl_8201DF90 - m * 0.008874697f;
    poly = poly * m - lbl_8201DF8C;
    poly = poly * m + lbl_8201DF88;
    poly = poly * m - lbl_8201DF84;
    poly = poly * m + lbl_8201DF80;
    poly = poly * m - lbl_8201DF7C;
    poly = poly * m + lbl_8201DF78;
    poly = poly * m + lbl_8201DF74;
    return poly + (float)exponent;
}
