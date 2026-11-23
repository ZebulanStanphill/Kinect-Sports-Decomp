typedef struct Sample_82921D58 {
    int left;          /* 0x00 */
    float leftWeight;  /* 0x04 */
    int right;         /* 0x08 */
    float rightWeight; /* 0x0c */
} Sample_82921D58;

extern void *fn_8265C940(unsigned int bytes, unsigned int attributes);

Sample_82921D58 *fn_82921D58(unsigned int inputCount, unsigned int outputCount, int wrap)
{
    Sample_82921D58 *samples = fn_8265C940(outputCount * sizeof(*samples), 0x24810000);
    if (samples) {
        float scale = (float)inputCount / (float)outputCount;
        unsigned int i;
        for (i = 0; i < outputCount; ++i) {
            float coordinate = ((float)i + 0.5f) * scale + 0.5f;
            int right = (int)coordinate;
            float leftWeight = (float)right + 1.0f - coordinate;
            int left = right - 1;
            if (left < 0) {
                left = wrap ? inputCount - 1 : 0;
            }
            if ((unsigned int)right >= inputCount) {
                right = wrap ? 0 : inputCount - 1;
            }
            samples[i].leftWeight = leftWeight;
            samples[i].left = left;
            samples[i].right = right;
            samples[i].rightWeight = 1.0f - leftWeight;
        }
    }
    return samples;
}
