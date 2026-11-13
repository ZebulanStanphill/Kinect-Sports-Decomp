double fabs(double);

extern double fn_82F65018(double y, double x);
extern const float lbl_82196080;

float fn_8306EA28(float y, float x)
{
    if (fabs(y) < lbl_82196080 && fabs(x) < lbl_82196080) {
        return 0.0f;
    }
    return (float)fn_82F65018(y, x);
}
