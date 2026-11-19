typedef struct Encoder_82A39CE8 {
    char pad0[0x1c];
    unsigned int windowFill; /* 0x1c: bytes in window, bits in usedMap */
    unsigned int itemCount;  /* 0x20 */
    unsigned int *items;     /* 0x24 */
    unsigned char *window;   /* 0x28 */
    unsigned char *usedMap;  /* 0x2c: one bit per window byte, 0x2000 bytes */
    char pad30[0x972 - 0x30];
    unsigned char pending; /* 0x972 */
} Encoder_82A39CE8;

extern void *memset(void *dst, int value, unsigned int size);
extern void *memmove(void *dst, const void *src, unsigned int size);
extern int fn_82A3D230(Encoder_82A39CE8 *encoder, unsigned int start, unsigned int end, unsigned int count,
                       unsigned int *outPos, unsigned int *outCount);
extern void fn_82A39BB0(Encoder_82A39CE8 *encoder, unsigned int pos, unsigned int count);
extern void fn_82A3B768(Encoder_82A39CE8 *encoder);

/* Emits the next block and moves what was not consumed to the start of the buffers. */
void fn_82A39CE8(Encoder_82A39CE8 *encoder)
{
    Encoder_82A39CE8 *self = encoder;
    unsigned int pos;
    unsigned int count;

    self->pending = 0;
    fn_82A3D230(self, 0, self->windowFill, self->itemCount, &pos, &count);
    fn_82A39BB0(self, pos, count);
    if (pos == self->windowFill) {
        memset(encoder->usedMap, 0, 0x2000);
        self->windowFill = 0;
        self->itemCount = 0;
    } else {
        memmove(self->usedMap, self->usedMap + (pos >> 3), (self->windowFill >> 3) - (pos >> 3) + 1);
        memset(self->usedMap + ((self->windowFill - pos) >> 3) + 1, 0,
               0x1fff - ((self->windowFill - pos) >> 3));
        memmove(self->window, self->window + pos, self->windowFill - pos);
        memmove(self->items, self->items + count, (self->itemCount - count) * 4);
        self->windowFill -= pos;
        self->itemCount -= count;
    }
    fn_82A3B768(self);
}
