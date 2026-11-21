extern const double lbl_82005710;
extern const double lbl_82015428;
extern const double lbl_82015430;
extern double fn_82F65E18(double x);
double sqrt(double x);

static __forceinline double Hue_827797D8(double red, double green, double blue)
{
    double angle;

    if (red == green && green == blue) {
        return lbl_82005710;
    }
    angle = fn_82F65E18(((red - green) + red - blue) * 0.5 /
                        sqrt((red - green) * (red - green) + (red - blue) * (green - blue)));
    if (!(green > blue)) {
        return lbl_82015428 - angle;
    }
    return angle;
}

void fn_827797D8(double red, double green, double blue, double *hue, double *saturation, double *intensity)
{
    double average;
    double minimum;
    double amount;
    double angle;

    average = (red + green + blue) * lbl_82015430;
    if (average == lbl_82005710) {
        amount = 1.0;
    } else {
        minimum = red < green ? red : green;
        if (!(minimum < blue)) {
            minimum = blue;
        }
        amount = 1.0 - minimum / average;
    }
    angle = Hue_827797D8(red, green, blue);
    *hue = angle;
    *saturation = amount;
    *intensity = average;
}
