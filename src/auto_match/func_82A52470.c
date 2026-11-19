typedef struct History_82A52470 {
    int pad0;      /* 0x00 */
    short *buffer; /* 0x04 */
    short *first;  /* 0x08 */
    short *second; /* 0x0C */
    short *third;  /* 0x10 */
    int pad14;     /* 0x14 */
    int pad18;     /* 0x18 */
} History_82A52470;

typedef struct Channel_82A52470 {
    char pad0[0x1A8];
    History_82A52470 *history; /* 0x1A8 */
    char pad1ac[0x544];
} Channel_82A52470;

typedef struct Format_82A52470 {
    char pad0[0x22];
    unsigned short channelCount; /* 0x22 */
    char pad24[0xC0];
    int length; /* 0xE4 */
} Format_82A52470;

typedef struct Decoder_82A52470 {
    Format_82A52470 *format; /* 0x00 */
    int pad4;                /* 0x04 */
    void *channelData;       /* 0x08 */
} Decoder_82A52470;

extern void *fn_82C2B580(unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);

long fn_82A52470(Decoder_82A52470 *decoder, Channel_82A52470 *channels)
{
    Format_82A52470 *format = decoder->format;
    long hr = 0;
    short i;
    int j;
    Channel_82A52470 *channel;
    History_82A52470 *history;

    if ((decoder->channelData = fn_82C2B580(format->channelCount << 3)) != 0) {
        for (i = 0; i < format->channelCount; i++) {
            channel = &channels[i];
            if ((history = channel->history = (History_82A52470 *)fn_82C2B580(0x1C)) == 0) {
                hr = 0x8007000E;
                goto done;
            }
            for (j = 0; j < 7; j++) {
                ((int *)history)[j] = 0;
            }
            channel->history->buffer = (short *)fn_82C2B580(format->length * 2 + 7);
            if (channel->history->buffer == 0) {
                hr = 0x8007000E;
                goto done;
            }
            memset(channel->history->buffer, 0, format->length * 2 + 7);
            channel->history->first = channel->history->buffer + 1;
            channel->history->second = channel->history->first + (format->length + 1);
            channel->history->third = channel->history->second + 1;
        }
    } else {
        hr = 0x8007000E;
    }
done:
    return hr;
}
