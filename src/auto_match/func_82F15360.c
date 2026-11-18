typedef struct Channel_82F15360 {
    int size; /* 0x0 */
    int unknown4[11];
    void *data; /* 0x30 */
    int used;   /* 0x34 */
} Channel_82F15360;

typedef struct Decoder_82F15360 {
    int reset;    /* 0x0 */
    int capacity; /* 0x4 */
    int unknown8;
    int channelCount; /* 0xc */
    int unknown10;
    int field14; /* 0x14 */
    int field18; /* 0x18 */
    int unknown1C[3];
    Channel_82F15360 *channels[11]; /* 0x28 */
    void *buffer;                   /* 0x54 */
    void *cursor;                   /* 0x58 */
} Decoder_82F15360;

extern int lbl_8325EDB8;
extern void fn_82F152D0(Decoder_82F15360 *self, int count, int *failed);
extern void fn_82F44D68(Channel_82F15360 *channel, int mode);
extern void *memset(void *destination, int value, unsigned int size);

/* Resets the decoder for a new mode: grows the buffer when asked and clears every channel. */
void fn_82F15360(Decoder_82F15360 *self, int mode, int count)
{
    int index;

    lbl_8325EDB8 = mode <= 5;
    if (count > 0) {
        int failed = 0;

        fn_82F152D0(self, count, &failed);
    }
    self->reset = 1;
    self->field18 = 0;
    self->field14 = 0;
    self->cursor = self->buffer;
    for (index = 0; index < self->channelCount; index++) {
        Channel_82F15360 *channel = self->channels[index];

        channel->used = 0;
        memset(channel->data, 0, channel->size * 4);
        fn_82F44D68(channel, mode);
    }
}
