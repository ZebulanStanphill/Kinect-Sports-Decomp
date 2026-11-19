typedef struct Usage_826AAA08 {
    unsigned int total; /* 0x0 */
    unsigned int used;  /* 0x4 */
} Usage_826AAA08;

typedef struct Heap_826AAA08 {
    unsigned int current; /* 0x0 */
    char pad004[0x18];
    unsigned int sinceTrim;  /* 0x1c */
    unsigned int reserve;    /* 0x20 */
    unsigned int peak;       /* 0x24 */
    unsigned int last;       /* 0x28 */
    unsigned int trimUsed;   /* 0x2c */
    unsigned int trimPeak;   /* 0x30 */
    unsigned int ticks;      /* 0x34 */
    unsigned int trimTicks;  /* 0x38 */
    unsigned int threshold;  /* 0x3c */
    unsigned int trimPeriod; /* 0x40 */
} Heap_826AAA08;

extern double lbl_82007310;
extern void fn_82682298(Heap_826AAA08 *self, Usage_826AAA08 *usage);

void fn_826AAA08(Heap_826AAA08 *self)
{
    unsigned int current;
    unsigned int count;
    unsigned int reserve;
    unsigned int scaled;
    unsigned int peak;
    unsigned int *reserveField;
    Usage_826AAA08 usage;

    self->ticks++;
    count = self->sinceTrim + 1;
    current = self->current;
    self->sinceTrim = count;
    peak = self->peak;
    if (current >= peak) {
        peak = current;
    }
    self->peak = peak;
    if ((self->threshold != 0 && current > self->reserve) ||
        (self->trimPeriod != 0 && count >= self->trimPeriod && current > self->threshold)) {
        usage.used = 0;
        usage.total = 0;
        fn_82682298(self, &usage);
        reserveField = &self->reserve;
        if (usage.used > self->threshold) {
            self->peak = current;
            *reserveField = self->threshold;
        }
        reserve = current - usage.used;
        if (reserve < *reserveField) {
            reserve = *reserveField;
        }
        peak = self->peak;
        *reserveField = reserve;
        scaled = (unsigned int)(reserve * lbl_82007310);
        if (peak < scaled) {
            *reserveField = scaled;
        }
        self->trimPeak = peak;
        self->trimTicks = self->ticks;
        self->sinceTrim = 0;
        self->trimUsed = usage.used;
    }
    self->last = current;
}
