typedef struct Samples_829DD910 {
    unsigned int count;
    float samples[150];
    unsigned int start; /* 0x25c */
} Samples_829DD910;

extern double sqrt(double value);

float fn_829DD910(Samples_829DD910 *self, float mean)
{
    float sum = 0.0f;
    unsigned int index;
    unsigned int count = self->count;
    for (index = 0; index < count; ++index) {
        float difference = self->samples[(self->start + index) % 150] - mean;
        sum += difference * difference;
    }
    return (float)sqrt(sum / count);
}
