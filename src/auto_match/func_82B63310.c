int fn_82B63310(const unsigned short *values, float firstTarget, float secondTarget)
{
    int best = 0;
    float firstDelta = firstTarget - (float)values[0] * 0.000015259022f;
    int index = 1;
    float secondDelta = secondTarget - (float)values[1] * 0.000015259022f;
    float distance = secondDelta * secondDelta + firstDelta * firstDelta;
    values += 2;
    do {
        float candidate;
        firstDelta = firstTarget - (float)values[0] * 0.000015259022f;
        secondDelta = secondTarget - (float)values[1] * 0.000015259022f;
        candidate = secondDelta * secondDelta + firstDelta * firstDelta;
        if (candidate < distance) {
            distance = candidate;
            best = index;
        }
        index++;
        values += 2;
    } while (index < 4);
    return best;
}
