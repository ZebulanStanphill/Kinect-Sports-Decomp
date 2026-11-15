extern int fn_82F6E018(double);
extern double fn_82B16720(double);
extern double lbl_82005710;

static __forceinline float SpecialValue(unsigned int bits)
{
    union {
        unsigned int bits;
        float value;
    } special;

    special.bits = bits;
    return special.value;
}

double fn_82B80598(double value)
{
    int kind;
    if (value == 1.0) {
        return 1.0;
    }
    kind = fn_82F6E018(value);
    if (kind > 0) {
        float special;
        if (kind > 2) {
            switch (kind) {
            case 4:
                special = SpecialValue(0x80000000);
                break;
            case 0x20:
                special = SpecialValue(0xff800000);
                break;
            case 0x40:
                special = SpecialValue(0x7f800000);
                break;
            case 0x200:
                return lbl_82005710;
            default:
                return fn_82B16720(1.0 / value);
            }
        } else {
            special = SpecialValue(0xffc00000);
        }
        return special;
    }
    return fn_82B16720(1.0 / value);
}
