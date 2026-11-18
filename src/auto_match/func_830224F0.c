typedef struct Format_830224F0 {
    int pad0;
    unsigned int sampleRate; /* 0x04 */
    unsigned short channels; /* 0x08 */
    unsigned short pad0a;
    float inverseChannels; /* 0x0c */
} Format_830224F0;

int fn_830224F0(Format_830224F0 *self, unsigned int sampleRate, unsigned short channels)
{
    self->sampleRate = sampleRate;
    self->channels = channels;
    self->inverseChannels = 1.0f / (float)channels;
    return 1;
}
