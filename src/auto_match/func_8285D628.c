/* Intersects the rectangles A and B; returns 1 and the overlap when they overlap. */
int fn_8285D628(const float *minA, const float *maxA, const float *minB, const float *maxB, float *outMin,
                float *outMax)
{
    float maxBY = maxB[1];
    float minAY = minA[1];
    float maxAY = maxA[1];
    float minBY = minB[1];
    float maxBX = maxB[0];
    float minAX = minA[0];
    float maxAX = maxA[0];
    float minBX = minB[0];

    if ((maxAX - minBX >= 0.0f ? 1.0f : 0.0f) + (maxBX - minAX >= 0.0f ? 1.0f : 0.0f) +
            (maxAY - minBY >= 0.0f ? 1.0f : 0.0f) + (maxBY - minAY >= 0.0f ? 1.0f : 0.0f) !=
        4.0f) {
        return 0;
    }
    outMin[1] = (minAY - minBY >= 0.0f) ? minAY : minBY;
    outMax[1] = (maxBY - maxAY >= 0.0f) ? maxAY : maxBY;
    outMin[0] = (minAX - minBX >= 0.0f) ? minAX : minBX;
    outMax[0] = (maxBX - maxAX >= 0.0f) ? maxAX : maxBX;
    return 1;
}
