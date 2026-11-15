typedef struct Queue_829D4A28 {
    char entries[700][0x7d4];
    unsigned int count; /* 0x1567b0 */
    unsigned int first; /* 0x1567b4 */
} Queue_829D4A28;

extern void *memcpy(void *, const void *, unsigned int);

unsigned char fn_829D4A28(Queue_829D4A28 *self, const void *entry)
{
    unsigned int count = self->count;
    if (count < 700) {
        self->count = count + 1;
        memcpy(self->entries[(self->first + self->count - 1) % 700], entry, 0x7d4);
        return 1;
    } else {
        memcpy(self->entries[self->first], entry, 0x7d4);
        self->first = (self->first + 1) % 700;
        return 0;
    }
}
