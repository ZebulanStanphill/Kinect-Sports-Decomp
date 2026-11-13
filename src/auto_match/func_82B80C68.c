extern const double lbl_82005710;
extern float fn_82B80258(float x);
extern double fn_82F6DF48(double x, double y);

float fn_82B80C68(float value, unsigned int flags)
{
    if (flags & 1) {
        value = fn_82B80258(value);
    }
    if (flags & 2) {
        value = (float)fn_82F6DF48(value, lbl_82005710);
    }
    if (flags & 4) {
        float t = value;
        *(unsigned int *)&value = *(unsigned int *)&t ^ 0x80000000;
    }
    return value;
}
