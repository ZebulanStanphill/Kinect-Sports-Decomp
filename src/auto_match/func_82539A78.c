double fabs(double x);

/* Clips the parameter range [*enter, *exit] of a moving interval [start, end] + t * direction
   against the slab [minimum, maximum]; returns whether anything is left. */
int fn_82539A78(float minimum, float maximum, float start, float end, float direction, float *enter,
                float *exit)
{
    float inverse;
    float t0;
    float t1;
    float swap;
    float low;
    float high;

    if (fabs(direction) < 1.0e-06f) {
        if (direction > 0.0f) {
            if (end < minimum) {
                return 0;
            }
            return start <= maximum;
        }
        if (start < minimum) {
            return 0;
        }
        return end <= maximum;
    }
    inverse = 1.0f / direction;
    t0 = (minimum - start) * inverse;
    t1 = (maximum - start) * inverse;
    if (t0 > t1) {
        swap = t0;
        t0 = t1;
        t1 = swap;
    }
    low = *enter;
    if (t1 < low) {
        return 0;
    }
    high = *exit;
    if (t0 > high) {
        return 0;
    }
    t0 = t0 - low >= 0.0f ? t0 : low;
    t1 = t1 - high >= 0.0f ? high : t1;
    *enter = t0;
    *exit = t1;
    return t1 >= t0;
}
