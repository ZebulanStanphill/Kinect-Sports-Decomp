typedef struct Table_82ACB390 {
    void *heap;            /* 0x00 */
    unsigned int reserved; /* 0x04 */
    unsigned int *data;    /* 0x08 */
    unsigned int capacity; /* 0x0c */
    unsigned int highest;  /* 0x10 */
} Table_82ACB390;

extern void *fn_82ABE9F0(void *, unsigned int, int);
extern void fn_82AC6808(void *, void *, unsigned int, int);
extern void *memcpy(void *, const void *, unsigned int);

void fn_82ACB390(Table_82ACB390 *self, unsigned int index, unsigned int value)
{
    unsigned __int64 offset = (index >> 4) * 4;
    unsigned int needed = offset + 4;
    unsigned int highest = index >> 4;
    unsigned int bit;
    if (needed > self->capacity) {
        unsigned int *data = fn_82ABE9F0(self->heap, needed * 4, 0);
        memcpy(data, self->data, self->capacity * 4);
        fn_82AC6808(self->heap, self->data, self->capacity * 4, 0);
        self->data = data;
        self->capacity = needed;
    }
    if (highest > self->highest) {
        self->highest = highest;
    }
    index &= 15;
    for (bit = 0; bit < 4; bit++) {
        if (index & (1u << (unsigned int)bit)) {
            self->data[(unsigned int)(offset + bit)] = value;
        }
    }
}
