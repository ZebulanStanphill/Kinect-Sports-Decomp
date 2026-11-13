extern const double lbl_82005710;
extern const double lbl_82006268;
extern double fn_82B80258(float x);
extern double fn_82F6DF48(double x, double y);
extern double fn_82F6DF80(double x);

double fn_82B80CD0(double value, int mode, unsigned int flags)
{
    if (flags & 1) {
        value = fn_82B80258((float)value);
    }
    if (flags & 2) {
        value = fn_82F6DF48(value, lbl_82005710);
    }
    if (flags & 4) {
        if (mode == 2) {
            value = lbl_82006268 - value;
        } else {
            value = fn_82F6DF80(value);
        }
    }
    return value;
}
