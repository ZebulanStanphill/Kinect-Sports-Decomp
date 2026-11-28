typedef struct Codec_82C180B8 Codec_82C180B8;

struct Codec_82C180B8 {
    char pad00[0x58];
    unsigned int stride;
    char pad5c[0x12];
    unsigned short format;
    char pad70[0x198];
    void (*Write)(int sample, unsigned char *output, Codec_82C180B8 *codec, int flag);
    int (*Read)(const unsigned char *input, unsigned int stride, unsigned short format, int flag);
};

typedef struct State_82C180B8 {
    Codec_82C180B8 *codec;
    char pad04[0x154];
    int *history;
    char pad15c[0xc];
    unsigned int channels;
} State_82C180B8;

int fn_82C180B8(State_82C180B8 *self, unsigned char *buffer, unsigned short *samples, unsigned int bytes)
{
    Codec_82C180B8 *codec = self->codec;
    unsigned int channels = self->channels;
    unsigned int count = *samples;
    int i;

    if ((bytes / codec->stride / channels >> 1) < count)
        return 0x80070057;

    for (i = 0; i < (int)channels; ++i) {
        unsigned int stride = codec->stride;
        unsigned char *input = buffer + ((count - 1) * channels + i) * stride;
        unsigned char *output = buffer + ((count * 2 - 1) * channels + i) * stride;
        int sample = codec->Read(input, stride, codec->format, 0);
        unsigned char *limit = buffer + (i + channels) * codec->stride;
        int last = sample;

        while (output > limit) {
            int previous;
            codec->Write(sample, output, codec, 0);
            stride = codec->stride;
            previous = sample;
            input -= channels * stride;
            output -= channels * stride;
            sample = codec->Read(input, stride, codec->format, 0);
            codec->Write((previous >> 1) + (sample >> 1), output, codec, 0);
            output -= channels * codec->stride;
        }
        codec->Write(sample, output, codec, 0);
        codec->Write((self->history[i] >> 1) + (sample >> 1), output - channels * codec->stride, codec, 0);
        self->history[i] = last;
    }
    *samples <<= 1;
    return 0;
}
