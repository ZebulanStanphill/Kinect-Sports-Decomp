typedef struct Queue_829DC778 {
    char entries[500][0x7d4];
    unsigned int count; /* 0xf4a10 */
    unsigned int first; /* 0xf4a14 */
} Queue_829DC778;

extern void *memcpy(void *, const void *, unsigned int);

unsigned char fn_829DC778(Queue_829DC778 *self, const void *entry)
{
    unsigned int count = self->count;
    if (count < 500) {
        self->count = count + 1;
        memcpy(self->entries[(self->first + self->count - 1) % 500], entry, 0x7d4);
        return 1;
    } else {
        memcpy(self->entries[self->first], entry, 0x7d4);
        self->first = (self->first + 1) % 500;
        return 0;
    }
}
