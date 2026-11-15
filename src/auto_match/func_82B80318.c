extern double lbl_820D8078;
extern double lbl_82005710;
extern int fn_82F6E018(double value);
extern double fn_82F655D8(double base, double exponent);
extern double fabs(double value);

static __forceinline float Infinity(void)
{
    union {
        unsigned int bits;
        float value;
    } result;

    result.bits = 0x7f800000;
    return result.value;
}

double fn_82B80318(double value)
{
    int category;
    if (value >= lbl_820D8078) {
        return Infinity();
    }
    if (fabs(value) < lbl_820D8078) {
        category = fn_82F6E018(value);
        if (category != 4) {
            if (category == 0x200) {
                return Infinity();
            }
            return fn_82F655D8(2.0, value);
        }
    }
    return lbl_82005710;
}
