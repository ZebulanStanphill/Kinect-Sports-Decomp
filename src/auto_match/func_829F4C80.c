extern float lbl_82079FCC;
double fabs(double);

void fn_829F4C80(float *value, float target, float step)
{
    float cur = *value;

    if (cur < target) {
        cur += step;
        *value = cur;
        if (cur > target) goto snap;
    } else {
        if (cur <= target) return;
        cur -= step;
        *value = cur;
        if (cur < target) goto snap;
    }
    if (fabs(step) >= lbl_82079FCC) return;
snap:
    *value = target;
}
