typedef struct Samples_829DD850 {
    unsigned int count;
    float samples[150];
    unsigned int start; /* 0x25c */
} Samples_829DD850;

extern void *memset(void *buffer, int value, unsigned int size);
extern int fn_829DD5A0(void *context, const void *a, const void *b);
extern void fn_82F6F440(void *base, unsigned int count, unsigned int size,
                        int (*compare)(void *, const void *, const void *), void *context);

float fn_829DD850(Samples_829DD850 *self)
{
    float values[150];
    unsigned int count;
    unsigned int i;

    values[0] = 0.0f;
    memset(values + 1, 0, sizeof(values) - sizeof(float));
    count = self->count;
    for (i = 0; i < count; i++) {
        values[i] = self->samples[(self->start + i) % 150];
    }
    fn_82F6F440(values, count, 4, fn_829DD5A0, 0);
    return values[count / 2];
}
