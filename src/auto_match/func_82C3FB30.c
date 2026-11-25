typedef struct RateTable_82C3FB30 {
    char pad0[0x8];
    short *rates; /* 0x08 */
} RateTable_82C3FB30;

typedef struct Stream_82C3FB30 {
    char pad0[0x34];
    int *samples; /* 0x34 */
    char pad38[0x3a];
    short rateIndex; /* 0x72 */
    char pad74[0x2];
    short count; /* 0x76 */
    char pad78[0x130];
    RateTable_82C3FB30 *table; /* 0x1a8 */
} Stream_82C3FB30;

void fn_82C3FB30(void *unused, Stream_82C3FB30 *stream)
{
    int *samples = stream->samples;
    short *rates = stream->table->rates;
    int previous = rates[stream->rateIndex - 1];
    int current = rates[stream->rateIndex];

    if (previous > current) {
        int step = previous / current;
        int i;

        for (i = 0; i < stream->count; i++) {
            samples[i] = samples[i * step];
        }
    } else if (previous < current) {
        int factor = current / previous;
        int blocks = stream->count / factor;
        int j;
        int k;

        for (j = blocks - 1; j >= 0; j--) {
            for (k = 0; k < factor; k++) {
                samples[j * factor + k] = samples[j];
            }
        }
    }
}
