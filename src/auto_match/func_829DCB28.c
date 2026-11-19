/* Finds the closest pair of 500-value frames from two lists (mean absolute difference) and
   returns that distance and the earlier of the two frames' times. */

typedef struct Frame_829DCB28 {
    float values[500];
    unsigned int time; /* 0x7d0 */
} Frame_829DCB28;

extern double fabs(double x);

void fn_829DCB28(Frame_829DCB28 *first, unsigned int firstCount, Frame_829DCB28 *second,
                 unsigned int secondCount, float *bestDistance, unsigned int *bestTime)
{
    unsigned int i;
    unsigned int j;
    int k;
    float distance;
    const Frame_829DCB28 *a;
    const Frame_829DCB28 *b;

    *bestDistance = 3.402823466e+38F;
    for (i = 0, a = first; i < firstCount; i++, a++) {
        for (j = 0, b = second; j < secondCount; j++, b++) {
            distance = 0.0f;
            for (k = 0; k < 500; k++) {
                distance += (float)fabs(a->values[k] - b->values[k]);
            }
            distance *= 0.002f;
            if (distance < *bestDistance) {
                *bestDistance = distance;
                *bestTime = a->time < b->time ? a->time : b->time;
            }
        }
    }
}
