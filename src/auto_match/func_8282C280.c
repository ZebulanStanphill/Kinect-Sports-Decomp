typedef struct Stream_8282C280 {
    char pad0[0x51];
    unsigned char blockCount; /* 0x51 */
    unsigned char enabled;    /* 0x52 */
    char pad53;
    unsigned int base;     /* 0x54 */
    unsigned int position; /* 0x58 */
    char pad5c[0x68 - 0x5c];
    unsigned int limit; /* 0x68 */
    unsigned int extra; /* 0x6c */
    char pad70[0x7c - 0x70];
    unsigned int extraLimit; /* 0x7c */
    char pad80[0xb8 - 0x80];
    unsigned int start;      /* 0xb8 */
    unsigned int length;     /* 0xbc */
    unsigned int extraStart; /* 0xc0 */
} Stream_8282C280;

extern unsigned int fn_828252D0(unsigned int offset);

void fn_8282C280(Stream_8282C280 *self, const unsigned char *flags)
{
    unsigned char pastLimit;
    unsigned char extraPastLimit;

    pastLimit = self->enabled && self->position > self->limit;
    extraPastLimit = self->enabled && self->extra > self->extraLimit;
    if (*flags & 0x80) {
        self->start = fn_828252D0(self->blockCount * 0x21 + self->base);
    } else if (*flags & 0x40) {
        self->length = fn_828252D0(self->position - self->blockCount * 0x21 - self->base);
    } else if (*flags & 0x20) {
        self->start = fn_828252D0((pastLimit ? 0x80 : 0) + self->position);
    }
    if ((*flags & 0x10) && self->extra != 0) {
        self->extraStart = fn_828252D0((extraPastLimit ? 0x80 : 0) + self->extra);
    }
}
