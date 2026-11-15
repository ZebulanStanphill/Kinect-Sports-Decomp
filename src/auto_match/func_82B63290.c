int fn_82B63290(const unsigned short *values, float target)
{
    int best = 0;
    int index = 1;
    float delta = target - (float)*values * 0.000015259022f;
    float distance = delta * delta;
    values++;
    do {
        float candidate;
        delta = target - (float)*values * 0.000015259022f;
        candidate = delta * delta;
        if (candidate < distance) {
            distance = candidate;
            best = index;
        }
        index++;
        values++;
    } while (index < 8);
    return best;
}
