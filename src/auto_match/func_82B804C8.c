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

double fn_82B804C8(double value)
{
    int category;
    double zero;
    if (value == 1.0) {
        return 1.0;
    }
    zero = lbl_82005710;
    if (value < zero) {
        return SpecialValue(0xffc00000);
    }
    category = fn_82F6E018(value);
    if (category > 0) {
        if (category <= 2 || category == 4) {
            return SpecialValue(0xffc00000);
        }
        switch (category) {
        case 0x20:
            return SpecialValue(0xff800000);
        case 0x40:
            return SpecialValue(0x7f800000);
        case 0x200:
            return zero;
        }
    }
    return fn_82B16720(1.0 / sqrt(value));
}
