typedef struct WaveFormat_8304B9D8 {
    unsigned short formatTag;           /* 0x0 */
    unsigned short channels;            /* 0x2 */
    unsigned int samplesPerSecond;      /* 0x4 */
    unsigned int averageBytesPerSecond; /* 0x8 */
    unsigned short blockAlign;          /* 0xc */
    unsigned short bitsPerSample;       /* 0xe */
    unsigned short extraSize;           /* 0x10 */
} WaveFormat_8304B9D8;

typedef struct Source_8304B9D8 {
    char padding0[0xd4];
    unsigned short mode; /* 0xd4 */
    char paddingd6[5];
    unsigned char flags; /* 0xdb */
    char paddingdc[0x138 - 0xdc];
    unsigned char *data; /* 0x138 */
    unsigned int size;   /* 0x13c */
} Source_8304B9D8;

typedef struct Decoder_8304B9D8 {
    char padding0[0x8];
    Source_8304B9D8 *source; /* 0x8 */
    char paddingc[0x4];
    char format[0x10];         /* 0x10 */
    unsigned int totalSamples; /* 0x20 */
    unsigned int loopSamples;  /* 0x24 */
    unsigned char *position;   /* 0x28 */
    unsigned char *end;        /* 0x2c */
    unsigned char *loopEnd;    /* 0x30 */
    unsigned int loopLength;   /* 0x34 */
    unsigned char *start;      /* 0x38 */
    unsigned short blockAlign; /* 0x3c */
} Decoder_8304B9D8;

extern int fn_8304D8A0(unsigned char *data, unsigned int size, WaveFormat_8304B9D8 *format,
                       unsigned int formatSize, void *extra, unsigned int *dataSize, unsigned int *loopStart,
                       unsigned int *loopLength, unsigned int *dataOffset, void *unused9, void *unused10);
extern int fn_8304B7E0(Decoder_8304B9D8 *self);

/* Parses the source's wave header and sets up the data, end and loop pointers and sample counts. */
int fn_8304B9D8(Decoder_8304B9D8 *self)
{
    unsigned char *data = self->source->data;
    unsigned int size = self->source->size;
    WaveFormat_8304B9D8 format;
    unsigned int dataSize;
    unsigned int dataOffset;
    unsigned int loopStart;
    unsigned int blockAlign;
    unsigned char *start;
    unsigned char *end;
    if (data == 0) {
        return 2;
    }
    if (fn_8304D8A0(data, size, &format, 0x12 /* WAVEFORMATEX without padding */, self->format, &dataSize,
                    &loopStart, &self->loopLength, &dataOffset, 0, 0) != 1) {
        return 7;
    }
    blockAlign = format.blockAlign;
    self->blockAlign = format.blockAlign;
    start = data + dataOffset;
    self->start = start;
    end = start + (dataSize >> 6) * blockAlign;
    self->end = end;
    if (loopStart != 0 && self->source->mode != 1) {
        self->loopEnd = start + ((loopStart + 1) >> 6) * blockAlign;
    } else {
        self->loopEnd = start + self->loopLength;
    }
    self->position = start;
    self->totalSamples = ((end - start) << 6) / blockAlign;
    self->loopSamples = ((self->loopEnd - start) << 6) / blockAlign;
    if ((self->source->flags & 0x80) != 0) {
        return fn_8304B7E0(self);
    }
    return 1;
}
