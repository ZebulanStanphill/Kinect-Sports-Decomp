typedef struct XmaStream_82A5DEC8 {
    unsigned int bytesPerSec;   /* 0x00 */
    unsigned int sampleRate;    /* 0x04 */
    unsigned int loopStart;     /* 0x08 */
    unsigned int loopEnd;       /* 0x0c */
    unsigned char subframeData; /* 0x10 */
    unsigned char channels;     /* 0x11 */
    unsigned short channelMask; /* 0x12 */
} XmaStream_82A5DEC8;

typedef struct XmaFormat_82A5DEC8 {
    unsigned short formatTag;      /* 0x00 */
    unsigned short bitsPerSample;  /* 0x02 */
    unsigned short encodeOptions;  /* 0x04 */
    unsigned short largestSkip;    /* 0x06 */
    unsigned short numStreams;     /* 0x08 */
    unsigned char loopCount;       /* 0x0a */
    unsigned char version;         /* 0x0b */
    XmaStream_82A5DEC8 streams[1]; /* 0x0c */
} XmaFormat_82A5DEC8;

typedef struct WaveFormatEx_82A5DEC8 {
    unsigned short formatTag;     /* 0x00 */
    unsigned short channels;      /* 0x02 */
    unsigned int samplesPerSec;   /* 0x04 */
    unsigned int avgBytesPerSec;  /* 0x08 */
    unsigned short blockAlign;    /* 0x0c */
    unsigned short bitsPerSample; /* 0x0e */
    unsigned short extraSize;     /* 0x10 */
} WaveFormatEx_82A5DEC8;

static __forceinline unsigned short CountBits(unsigned short mask)
{
    unsigned short bits;

    bits = 0;
    while (mask != 0) {
        bits++;
        mask &= mask - 1;
    }
    return bits;
}

int fn_82A5DEC8(const XmaFormat_82A5DEC8 *format)
{
    int valid = 1;
    int i;
    const XmaStream_82A5DEC8 *stream;

    if (((const WaveFormatEx_82A5DEC8 *)format)->extraSize < 0x20) {
        return 0;
    }
    if (!(format->bitsPerSample == 16)) {
        valid = 0;
    }
    if (!(format->version == 2)) {
        valid = 0;
    }
    if (!(format->numStreams != 0)) {
        valid = 0;
    }
    if (!(format->streams[0].sampleRate != 0)) {
        valid = 0;
    }
    for (i = 0; i < format->numStreams; i++) {
        stream = &format->streams[i];
        if (!(stream->sampleRate == format->streams[0].sampleRate)) {
            valid = 0;
        }
        if (!((stream->subframeData & 0xf) <= 4)) {
            valid = 0;
        }
        if (!((stream->subframeData & 0xf0) <= 0x30)) {
            valid = 0;
        }
        if (stream->channels != 1) {
            if (!(stream->channels == 2)) {
                valid = 0;
            }
        }
        if (stream->channelMask != 0) {
            if (CountBits(stream->channelMask) != stream->channels) {
                valid = 0;
            }
        }
    }
    return valid;
}
