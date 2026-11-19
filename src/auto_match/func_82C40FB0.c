typedef struct Band_82C40FB0 {
    char data[0x38];
} Band_82C40FB0;

typedef struct Channel_82C40FB0 {
    char pad0[0xb6];
    short bandCount; /* 0x0b6 */
    char padb8[4];
    int mbc; /* 0x0bc */
    char padc0[8];
    Band_82C40FB0 bands[4]; /* 0x0c8 */
    char pad1a8[0x1c0 - 0x1a8];
    int reset;       /* 0x1c0 */
    int m1c4;        /* 0x1c4 */
    int m1c8;        /* 0x1c8 */
    int m1cc;        /* 0x1cc */
    int m1d0;        /* 0x1d0 */
    int counters[4]; /* 0x1d4 */
    char pad1e4[0x650 - 0x1e4];
    unsigned char history[0xa0]; /* 0x650 */
} Channel_82C40FB0;

typedef struct Decoder_82C40FB0 {
    char pad0[0x244];
    short channelCount; /* 0x244 */
    char pad246[2];
    short *channelIndices; /* 0x248 */
    char pad24c[0x298 - 0x24c];
    char state[4]; /* 0x298 */
} Decoder_82C40FB0;

extern void *memset(void *dst, int value, unsigned int size);
extern void fn_82C3DB38(Decoder_82C40FB0 *self, void *state);
extern void fn_82C3F390(Decoder_82C40FB0 *self, Band_82C40FB0 *band);
extern void fn_82C3F478(Decoder_82C40FB0 *self, Band_82C40FB0 *band, int flag);

int fn_82C40FB0(Decoder_82C40FB0 *self, Channel_82C40FB0 *channels)
{
    short i;

    fn_82C3DB38(self, self->state);
    for (i = 0; i < self->channelCount; i++) {
        Channel_82C40FB0 *channel = &channels[self->channelIndices[i]];
        short j;
        unsigned short k;

        memset(channel->history, 0, 0xa0);
        memset(channel->counters, 0, sizeof(channel->counters));
        for (j = 0; j < channel->bandCount; j++) {
            fn_82C3F390(self, &channel->bands[j]);
        }
        channel->mbc = 0;
        channel->m1c4 = 0;
        channel->m1c8 = -1;
        channel->m1cc = 0;
        channel->m1d0 = 0;
        if (channel->reset == 1) {
            channel->reset = 0;
            for (k = 0; k < channel->bandCount; k++) {
                fn_82C3F478(self, &channel->bands[k], 0);
            }
        }
    }
    return 0;
}
