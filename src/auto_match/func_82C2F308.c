struct Info_82C2F308 {
    unsigned char pad0[0xc];
    short *offset; /* 0xc */
};

struct Channel_82C2F308 {
    unsigned char pad0[0x38];
    int *samples; /* 0x38 */
    unsigned char pad3c[0x76 - 0x3c];
    short count; /* 0x76 */
    unsigned char pad78[0x1a8 - 0x78];
    struct Info_82C2F308 *info; /* 0x1a8 */
    unsigned char pad1ac[0x6f0 - 0x1ac];
};

struct Mixer_82C2F308 {
    unsigned char pad0[0xd0];
    short gain; /* 0xd0 */
    unsigned char padd2[0x140 - 0xd2];
    struct Channel_82C2F308 *channels; /* 0x140 */
    unsigned char pad144[0x244 - 0x144];
    short activeCount; /* 0x244 */
    unsigned char pad246[2];
    short *active; /* 0x248 */
};

void fn_82C2F308(struct Mixer_82C2F308 *self)
{
    short i;
    int j;
    int count;
    struct Channel_82C2F308 *channel;
    int *samples;

    for (i = 0; i < self->activeCount; i++) {
        channel = &self->channels[self->active[i]];
        samples = channel->samples + *channel->info->offset;
        count = channel->count;
        for (j = 0; j < count; j++) {
            samples[j] = self->gain * samples[j];
        }
    }
}
