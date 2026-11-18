typedef struct Stream_82641518 {
    char pad[0x30];
    unsigned int *current; /* 0x30 */
    unsigned int *end;     /* 0x34 */
} Stream_82641518;

extern unsigned int *fn_82641518(Stream_82641518 *self, unsigned int *out, unsigned int command,
                                 const unsigned int *source, unsigned int count, int stride);

void fn_82641B60(Stream_82641518 *self, unsigned __int64 mask, unsigned int command,
                 const unsigned int *source)
{
    unsigned int *out;
    unsigned int skip;
    unsigned int count;
    unsigned int left;
    unsigned int start;

    out = self->current;
    source--;
    do {
        skip = _CountLeadingZeros64(mask);
        mask <<= skip;
        source += skip;
        start = command + skip;
        count = _CountLeadingZeros64(~mask);
        left = count;
        if (out + count >= self->end) {
            out = fn_82641518(self, out, start, source, count, 1);
            source += count;
            command = count + start;
            mask <<= count;
        } else {
            command = count + start;
            *++out = ((count - 1) << 16) | start;
            do {
                *++out = *++source;
                mask <<= 1;
                left--;
            } while (left);
        }
    } while (mask != 0);
    self->current = out;
}
