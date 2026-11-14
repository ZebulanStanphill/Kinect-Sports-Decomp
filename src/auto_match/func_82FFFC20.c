extern int fn_82F65350(void);
extern const double lbl_8217BB90;

float fn_82FFFC20(float *range)
{
    float value = range[1] - range[0];
    if (value != 0.0f) {
        double random = (double)fn_82F65350() * lbl_8217BB90;
        value = (float)(random * value);
    } else
        value = 0.0f;
    return range[0] + value;
}
