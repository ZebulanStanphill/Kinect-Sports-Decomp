int fn_827EC910(float aMin, float aMax, float bMin, float bMax, float *outMin, float *outMax)
{
    if (bMin > aMax) {
        return 0;
    }
    if (bMax < aMin) {
        return 0;
    }
    if (aMin <= bMin && bMin <= aMax) {
        *outMin = bMin;
        *outMax = bMax < aMax ? bMax : aMax;
    } else {
        *outMin = aMin;
        if (bMax <= aMax) {
            *outMax = bMax;
        } else {
            *outMax = aMax;
        }
    }
    return 1;
}
