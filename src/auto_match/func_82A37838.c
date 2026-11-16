typedef struct Ring_82A37838 {
    char *begin;   /* 0x00 */
    char *current; /* 0x04 */
    char padding[0x24];
    unsigned int capacity; /* 0x2c */
    int count;             /* 0x30 */
} Ring_82A37838;

void *fn_82A37838(Ring_82A37838 *self, int index)
{
    if (index < self->count) {
        return self->begin + (((self->current - self->begin) / 96 + index) % self->capacity) * 96;
    }
    return 0;
}
