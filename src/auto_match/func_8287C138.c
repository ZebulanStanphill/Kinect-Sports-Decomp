extern const float lbl_8201DDF4;
extern const float lbl_82022E64;

/* Wraps an angle in degrees into [0, 360); an angle outside the accepted range becomes 0. */
float fn_8287C138(float *angle)
{
    if (*angle >= lbl_8201DDF4 && *angle <= lbl_82022E64) {
        while (*angle < 0.0f) {
            *angle += 360.0f;
        }
        while (*angle >= 360.0f) {
            *angle -= 360.0f;
        }
        return *angle;
    }
    *angle = 0.0f;
    return 0.0f;
}
