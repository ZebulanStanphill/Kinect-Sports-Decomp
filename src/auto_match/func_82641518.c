extern void fn_82645110(void *);

typedef struct Stream_82641518 {
    char pad[0x30];
    unsigned int *current;
    unsigned int *end;
} Stream_82641518;

unsigned int *fn_82641518(Stream_82641518 *self, unsigned int *out, unsigned int command,
                          const unsigned int *source, unsigned int count, int stride)
{
    for (;;) {
        int available = (self->end - out - 1) / stride;
        if (available > 0) {
            unsigned int amount = available * stride;
            unsigned int left;
            if (amount >= count) {
                amount = count;
            }
            count -= amount;
            *++out = ((amount - 1) << 16) | command;
            left = amount;
            while (left) {
                *++out = *++source;
                left--;
            }
            command += amount;
        }
        if (!count) {
            break;
        }
        self->current = out;
        fn_82645110(self);
        out = self->current;
    }
    return out;
}
