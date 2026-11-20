typedef struct Source_82A07078 {
    int unknown0;   /* 0x0 */
    float distance; /* 0x4 */
    float unknown8; /* 0x8 */
    float weight;   /* 0xc */
} Source_82A07078;

/* Scales each gain whose source has a positive weight by minDistance / (position - distance) when
   that distance exceeds minDistance. The first argument is not used. */
void fn_82A07078(void *context, const Source_82A07078 *sources, float *gains, unsigned int count,
                 float minDistance, float position)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        if (sources[i].weight > 0.0f) {
            float distance = position - sources[i].distance;

            if (distance > minDistance) {
                float ratio = minDistance / distance;

                gains[i] *= ratio;
            }
        }
    }
}
