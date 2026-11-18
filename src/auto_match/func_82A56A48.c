typedef struct Codec_82A56A48 {
    char pad00[0x58];
    int stride; /* 0x58 */
    char pad5c[0x12];
    unsigned short bits; /* 0x6e */
    char pad70[0x19c];
    int (*sample)(void *source, int stride, unsigned short bits, int channel); /* 0x20c */
} Codec_82A56A48;

typedef struct Obj_82A56A48 {
    Codec_82A56A48 *codec; /* 0x0 */
    char pad04[0x160];
    int enabled;  /* 0x164 */
    int channels; /* 0x168 */
} Obj_82A56A48;

int fn_82A56A48(Obj_82A56A48 *self, char *src, int count)
{
    short *out = (short *)src;
    Codec_82A56A48 *codec = self->codec;
    int channels = self->channels;
    int shift;
    int frame;
    int channel;
    int sample;
    if (self->enabled) {
        shift = self->codec->bits - 16;
        for (frame = 0; frame < count; frame++) {
            for (channel = 0; channel < channels; channel++) {
                sample = codec->sample(src, codec->stride, codec->bits, channel) >> shift;
                out[channel] = ((short *)&sample)[1];
            }
            out += channels;
            src += channels * codec->stride;
        }
    }
    return 0;
}
