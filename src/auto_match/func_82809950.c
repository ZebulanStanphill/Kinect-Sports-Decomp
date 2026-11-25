extern const double lbl_8201EB08;
extern const double lbl_8201EB10;
extern const double lbl_8201EB18;
extern const float lbl_8201EB24;
extern const float lbl_8201EB28;
extern const double lbl_8201EB30;
extern const double lbl_8201EB38;
extern const double lbl_8201EB40;
extern const double lbl_8201EB48;
extern const double lbl_8201EB50;
extern const double lbl_8201EB58;
extern const double lbl_8201EB60;
extern const double lbl_8201EB68;
extern const double lbl_8201EB70;
extern const double lbl_8201EB78;
extern double fabs(double);
extern double __fctid(double);
extern double __fcfid(double);
extern double __fsel(double, double, double);

typedef union Magnitude_82809950 {
    double magnitude;
    __int64 bits;
} Magnitude_82809950;

float fn_82809950(float angle)
{
    Magnitude_82809950 input;

    double turns;
    double reduced;
    double square;
    double value;
    double sign;

    input.magnitude = fabs(angle);

    turns = __fcfid(__fctid(lbl_8201EB08 * input.magnitude));
    sign = __fsel(angle, lbl_8201EB24, lbl_8201EB28);
    reduced = input.magnitude - lbl_8201EB30 * turns;
    reduced -= lbl_8201EB38 * turns;
    square = reduced * reduced;
    value = lbl_8201EB78 * square + lbl_8201EB70;
    value = value * square + lbl_8201EB68;
    value = value * square + lbl_8201EB60;
    value = value * square + lbl_8201EB58;
    value = value * square + lbl_8201EB50;
    value = value * square + lbl_8201EB48;
    value = value * square + lbl_8201EB40;
    value = (value * square + lbl_8201EB24) * reduced;
    if (((__int64)turns & 1) != 0)
        value = -value;
    value *= sign;
    if (input.bits != 0) {
        angle = (float)__fsel(input.magnitude - lbl_8201EB10, lbl_8201EB18, value);
        return angle;
    } else {
        return angle;
    }
}
