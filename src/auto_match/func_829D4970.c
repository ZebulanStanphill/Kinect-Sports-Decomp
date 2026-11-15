typedef struct Queue_829D4970 {
    char entries[20][0x7d4];
    unsigned int count; /* 0x9c90 */
    unsigned int first; /* 0x9c94 */
} Queue_829D4970;

extern void *memcpy(void *, const void *, unsigned int);

unsigned char fn_829D4970(Queue_829D4970 *self, const void *entry)
{
    unsigned int count = self->count;
    if (count < 20) {
        self->count = count + 1;
        memcpy(self->entries[(self->first + self->count - 1) % 20], entry, 0x7d4);
        return 1;
    } else {
        memcpy(self->entries[self->first], entry, 0x7d4);
        self->first = (self->first + 1) % 20;
        return 0;
    }
}
