typedef struct Queue_829DD5D0 {
    unsigned int count;        /* 0x00 */
    unsigned int entries[150]; /* 0x04 */
    unsigned int first;        /* 0x25c */
} Queue_829DD5D0;

extern void fn_82A1DDC0(void *, const void *, unsigned int);

unsigned char fn_829DD5D0(Queue_829DD5D0 *self, const void *entry)
{
    unsigned int count = self->count;
    if (count < 150) {
        self->count = count + 1;
        fn_82A1DDC0(&self->entries[(self->first + self->count - 1) % 150], entry, 4);
        return 1;
    } else {
        fn_82A1DDC0(&self->entries[self->first], entry, 4);
        self->first = (self->first + 1) % 150;
        return 0;
    }
}
