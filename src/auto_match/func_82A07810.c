/* Running average over the last 30 samples (ring buffer). */
typedef struct RunningAverage_82A07810 {
    float average;      /* 0x00 */
    float sum;          /* 0x04 */
    unsigned int count; /* 0x08 */
    unsigned int next;  /* 0x0c */
    float samples[30];  /* 0x10 */
} RunningAverage_82A07810;

void fn_82A07810(RunningAverage_82A07810 *avg, float value)
{
    if (avg->count < 30) {
        avg->samples[avg->next] = value;
        avg->sum += value;
        avg->count++;
    } else {
        avg->sum = avg->sum - avg->samples[avg->next] + value;
        avg->samples[avg->next] = value;
    }
    avg->average = avg->sum / (float)avg->count;
    avg->next = (avg->next + 1) % 30;
}
