extern double lbl_82005710;
extern int fn_82F6E018(double);
extern double fn_82B16720(double);
extern double sqrt(double);

static __forceinline float SpecialValue(unsigned int bits)
{
    union {
        unsigned int bits;
        float value;
    } result;

    result.bits = bits;
    return result.value;
}

double fn_82B80438(double value)
{
    int category;
    float special;
    if (value == 1.0) {
        return 1.0;
    }
    if (value < lbl_82005710) {
        return SpecialValue(0xffc00000);
    }
    category = fn_82F6E018(value);
    if (category > 0) {
        if (category <= 2 || category == 4) {
            return SpecialValue(0xffc00000);
        }
        if (category == 0x200) {
            return SpecialValue(0x7f800000);
        }
    }
    return fn_82B16720(sqrt(value));
}
