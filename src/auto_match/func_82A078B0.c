/* Running average over the last 200 samples (ring buffer). */
typedef struct RunningAverage_82A078B0 {
    float average;      /* 0x00 */
    float sum;          /* 0x04 */
    unsigned int count; /* 0x08 */
    unsigned int next;  /* 0x0c */
    float samples[200]; /* 0x10 */
} RunningAverage_82A078B0;

void fn_82A078B0(RunningAverage_82A078B0 *avg, float value)
{
    if (avg->count < 200) {
        avg->samples[avg->next] = value;
        avg->sum += value;
        avg->count++;
    } else {
        avg->sum = avg->sum - avg->samples[avg->next] + value;
        avg->samples[avg->next] = value;
    }
    avg->average = avg->sum / (float)avg->count;
    avg->next = (avg->next + 1) % 200;
}
