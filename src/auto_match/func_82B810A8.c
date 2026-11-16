extern int fn_82F6E018(double value);
extern double fn_82F6DF80(double value);
extern double fn_82F6DF48(double first, double second);
extern const double lbl_82005710;

static __forceinline float NegativeZero(void)
{
    union {
        unsigned int bits;
        float value;
    } zero;

    zero.bits = 0x80000000;
    return zero.value;
}

double fn_82B810A8(double first, double second)
{
    if (NegativeZero() == first) {
        first = lbl_82005710;
    }
    if (NegativeZero() == second) {
        second = lbl_82005710;
    }
    switch (fn_82F6E018(first)) {
    case 4:
        return fn_82F6DF48(first, fn_82F6DF80(second));
    case 0x200:
        return fn_82F6DF48(first, second);
    default:
        switch (fn_82F6E018(second)) {
        case 4:
            return fn_82F6DF48(second, fn_82F6DF80(first));
        case 0x200:
            return fn_82F6DF48(second, first);
        default:
            return first * second;
        }
    }
}
