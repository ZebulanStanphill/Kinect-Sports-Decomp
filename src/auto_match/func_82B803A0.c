extern double lbl_82005710;
extern int fn_82F6E018(double value);
extern double fn_82F65E20(double value);

static __forceinline float SpecialValue(unsigned int bits)
{
    union {
        unsigned int bits;
        float value;
    } special;

    special.bits = bits;
    return special.value;
}

double fn_82B803A0(double value)
{
    int category;
    float special;
    if (value == lbl_82005710) {
        special = SpecialValue(0xff800000);
    } else if (value < lbl_82005710 || (category = fn_82F6E018(value)) == 4) {
        special = SpecialValue(0xffc00000);
    } else {
        if (category != 0x200) {
            double numerator = fn_82F65E20(value);
            double denominator = fn_82F65E20(2.0);
            return numerator / denominator;
        }
        special = SpecialValue(0x7f800000);
    }
    return special;
}
