void *memset(void *dst, int value, unsigned int size);

typedef struct History_82C16DF0 {
    int unk0;       /* 0x0 */
    short *samples; /* 0x4 */
    short *first;   /* 0x8 */
    short *second;  /* 0xc */
    short *third;   /* 0x10 */
    int unk14;      /* 0x14 */
    int unk18;      /* 0x18 */
} History_82C16DF0;

typedef struct Channel_82C16DF0 {
    char pad0[0x1a8];
    History_82C16DF0 *history; /* 0x1a8 */
    char pad1ac[0x6f0 - 0x1ac];
} Channel_82C16DF0;

typedef struct Format_82C16DF0 {
    char pad0[0x22];
    unsigned short channelCount; /* 0x22 */
    char pad24[0xe4 - 0x24];
    unsigned int historyLength; /* 0xe4 */
} Format_82C16DF0;

typedef struct Decoder_82C16DF0 {
    Format_82C16DF0 *format; /* 0x0 */
    int unk4;                /* 0x4 */
    void *channelData;       /* 0x8 */
} Decoder_82C16DF0;

extern void *fn_82C2B580(unsigned int size);

int fn_82C16DF0(Decoder_82C16DF0 *decoder, Channel_82C16DF0 *channels)
{
    Format_82C16DF0 *format = decoder->format;
    int hr = 0;
    short i;
    int j;
    Channel_82C16DF0 *channel;
    int *words;

    decoder->channelData = fn_82C2B580(format->channelCount * 8);
    if (decoder->channelData == 0) {
        hr = 0x8007000E;
        goto exit;
    }
    for (i = 0; i < format->channelCount; i++) {
        channel = &channels[i];
        channel->history = fn_82C2B580(sizeof(History_82C16DF0));
        if (channel->history == 0) {
            hr = 0x8007000E;
            goto exit;
        }
        words = (int *)channel->history;
        for (j = 0; j < 7; j++) {
            words[j] = 0;
        }
        channel->history->samples = fn_82C2B580(format->historyLength * 2 + 7);
        if (channel->history->samples == 0) {
            hr = 0x8007000E;
            goto exit;
        }
        memset(channel->history->samples, 0, format->historyLength * 2 + 7);
        channel->history->first = channel->history->samples + 1;
        channel->history->second = channel->history->first + (format->historyLength + 1);
        channel->history->third = channel->history->second + 1;
    }

exit:
    return hr;
}
