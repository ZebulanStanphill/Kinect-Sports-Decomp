extern void *memset(void *dest, int value, unsigned int count);

typedef struct Channel_82C2F228 {
    char data[0x38];
} Channel_82C2F228;

typedef struct Stream_82C2F228 {
    char pad000[0xb6];
    short channelCount; /* 0x0b6 */
    char pad0b8[0x4];
    int position; /* 0x0bc */
    char pad0c0[0x8];
    Channel_82C2F228 channels[4]; /* 0x0c8 */
    char pad1a8[0x1d4 - 0x1a8];
    int history[4]; /* 0x1d4 */
    char pad1e4[0x650 - 0x1e4];
    char state[0xa0]; /* 0x650 */
} Stream_82C2F228;

typedef struct Decoder_82C2F228 {
    char pad000[0x244];
    short streamCount; /* 0x244 */
    char pad246[0x2];
    short *streamIndices; /* 0x248 */
    char pad24c[0x3c];
    int reset; /* 0x288 */
    char pad28c[0x40];
    int frame; /* 0x2cc */
} Decoder_82C2F228;

extern int fn_82C3F390(Decoder_82C2F228 *self, Channel_82C2F228 *channel);

static __forceinline void ClearHistory_82C2F228(int *history)
{
    history[0] = 0;
    history[1] = 0;
    history[2] = 0;
    history[3] = 0;
}

int fn_82C2F228(Decoder_82C2F228 *self, Stream_82C2F228 *streams)
{
    short i;
    short j;
    Stream_82C2F228 *stream;

    self->frame = 0;
    self->reset = 1;
    for (i = 0; i < self->streamCount; i++) {
        stream = &streams[self->streamIndices[i]];
        memset(stream->state, 0, 0xa0);
        ClearHistory_82C2F228(stream->history);
        for (j = 0; j < stream->channelCount; j++) {
            fn_82C3F390(self, &stream->channels[j]);
        }
        stream->position = 0;
    }
    return 0;
}
