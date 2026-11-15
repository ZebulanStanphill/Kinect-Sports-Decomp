typedef struct Queue_829D4AE0 {
    char entries[20][0x590];
    unsigned int count; /* 0x6f40 */
    char reserved[12];
    unsigned int first; /* 0x6f50 */
} Queue_829D4AE0;

extern void *memcpy(void *, const void *, unsigned int);

unsigned char fn_829D4AE0(Queue_829D4AE0 *self, const void *entry)
{
    unsigned int count = self->count;
    if (count < 20) {
        self->count = count + 1;
        memcpy(self->entries[(self->first + self->count - 1) % 20], entry, 0x590);
        return 1;
    } else {
        memcpy(self->entries[self->first], entry, 0x590);
        self->first = (self->first + 1) % 20;
        return 0;
    }
}
