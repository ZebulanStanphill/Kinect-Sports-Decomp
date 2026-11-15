extern double fn_82F65FB0(double value);
extern double lbl_82005710;
extern double lbl_82005728;
extern float lbl_82005CCC;
extern double lbl_8217C790;
extern double lbl_8217C788;

float fn_8302A728(double value)
{
    if (value <= lbl_82005710) {
        return 0.0f;
    }
    if (value >= 255.0) {
        return lbl_82005CCC;
    }
    return (float)((fn_82F65FB0(value * (1.0 / 255.0)) * lbl_82005728 + lbl_8217C790) * lbl_8217C788);
}
