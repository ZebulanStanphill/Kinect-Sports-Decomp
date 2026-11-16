extern float lbl_8218EC10;
extern double fabs(double value);

static __forceinline float ClampCrossing_82564018(float target, float previous, float current,
                                                  float tolerance)
{
    if ((previous < target && current > target) || (previous > target && current < target) ||
        fabs(current - target) < tolerance) {
        return target;
    }
    return current;
}

void fn_82564018(const float *target, const float *previous, float *current)
{
    float tolerance = lbl_8218EC10;
    float secondTarget;
    float firstTarget;
    firstTarget = target[0];
    current[0] = ClampCrossing_82564018(firstTarget, previous[0], current[0], tolerance);
    secondTarget = target[1];
    current[1] = ClampCrossing_82564018(secondTarget, previous[1], current[1], tolerance);
    current[2] = ClampCrossing_82564018(target[2], previous[2], current[2], tolerance);
}
