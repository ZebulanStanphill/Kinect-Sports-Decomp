typedef struct Counts_82FF2778 {
    unsigned int total;
    unsigned int used;
} Counts_82FF2778;

extern void fn_82FA5288(void *, Counts_82FF2778 *);

unsigned char fn_82FF2778(void *self, float threshold)
{
    Counts_82FF2778 counts;
    if (threshold < 1.0f) {
        fn_82FA5288(self, &counts);
        if (counts.total != 0) {
            return (float)counts.used / (float)counts.total > threshold;
        }
    }
    return 0;
}
