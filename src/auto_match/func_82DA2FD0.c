/* Arc sine with the argument clamped: |r| >= 1 gives +-pi/2 (lbl_8201DD70, lbl_8201DF4C);
   fn_82F65D50 is the double-precision asin. */
double fabs(double);

extern double fn_82F65D50(double);
extern float lbl_8201DD70;
extern float lbl_8201DF4C;

float fn_82DA2FD0(float r)
{
    if (fabs(r) >= 1.0f) {
        return r > 0.0f ? lbl_8201DD70 : lbl_8201DF4C;
    }
    return (float)fn_82F65D50(r);
}
