extern const float lbl_8201DDF4;
extern const float lbl_82022E64;

/* Wraps an angle in radians into [0, 2 pi); an angle outside the accepted range becomes 0. */
float fn_8287C1B8(float *angle)
{
    if (*angle >= lbl_8201DDF4 && *angle <= lbl_82022E64) {
        while (*angle < 0.0f) {
            *angle += 6.2831855f;
        }
        while (*angle >= 6.2831855f) {
            *angle -= 6.2831855f;
        }
        return *angle;
    }
    *angle = 0.0f;
    return 0.0f;
}
