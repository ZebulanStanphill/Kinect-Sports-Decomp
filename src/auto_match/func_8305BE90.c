extern double fn_82F655D8(double base, double exponent);
extern const double lbl_820E86E0;
extern const double lbl_82005710;
extern const double lbl_8217E688;

double fn_8305BE90(double amount, double value)
{
    double result = value - (1.0 - fn_82F655D8(value, lbl_820E86E0)) * lbl_8217E688;
    if (amount < lbl_82005710) {
        result = (1.0 - (1.0 - value * value) * (amount * -0.1)) * result;
    }
    return result;
}
