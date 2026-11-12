float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax)
{
    float r;

    if (inMax != inMin) {
        r = (x - inMin) / (inMax - inMin) * (outMax - outMin) + outMin;
        if (outMax > outMin) {
            if (r <= outMax) {
                if (r < outMin)
                    return outMin;
                return r;
            }
        } else {
            if (r >= outMax) {
                if (r > outMin)
                    return outMin;
                return r;
            }
        }
    }
    return outMax;
}
