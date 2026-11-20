typedef struct XmaFormat_82A5DFF8 {
    unsigned short wFormatTag;     /* 0x00 */
    unsigned short nChannels;      /* 0x02 */
    unsigned int nSamplesPerSec;   /* 0x04 */
    unsigned int nAvgBytesPerSec;  /* 0x08 */
    unsigned short nBlockAlign;    /* 0x0c */
    unsigned short wBitsPerSample; /* 0x0e */
    unsigned short cbSize;         /* 0x10 */
    unsigned short NumStreams;     /* 0x12 */
    unsigned int ChannelMask;      /* 0x14 */
    unsigned int SamplesEncoded;   /* 0x18 */
    unsigned int BytesPerBlock;    /* 0x1c */
    unsigned int PlayBegin;        /* 0x20 */
    unsigned int PlayLength;       /* 0x24 */
    unsigned int LoopBegin;        /* 0x28 */
    unsigned int LoopLength;       /* 0x2c */
    unsigned char LoopCount;       /* 0x30 */
    unsigned char EncoderVersion;  /* 0x31 */
    unsigned short BlockCount;     /* 0x32 */
} XmaFormat_82A5DFF8;

int fn_82A5DFF8(const XmaFormat_82A5DFF8 *format)
{
    int valid = 1;

    if (format->nBlockAlign != format->nChannels * 2) {
        valid = 0;
    }
    if (format->wBitsPerSample != 16) {
        valid = 0;
    }
    if (format->cbSize != 34) {
        return 0;
    }
    if (format->EncoderVersion < 3) {
        valid = 0;
    }
    if (format->BlockCount == 0) {
        valid = 0;
    }
    if (format->BytesPerBlock == 0 || format->BytesPerBlock > 0x7ff800) {
        valid = 0;
    }
    if (format->ChannelMask != 0) {
        unsigned int mask = format->ChannelMask;
        unsigned short bits = 0;

        do {
            mask &= mask - 1;
            bits++;
        } while (mask != 0);
        if (bits != format->nChannels) {
            valid = 0;
        }
    }
    if (format->NumStreams != (format->nChannels + 1) / 2) {
        valid = 0;
    }
    if (format->PlayBegin + format->PlayLength > format->SamplesEncoded) {
        valid = 0;
    }
    if (format->LoopBegin + format->LoopLength > format->SamplesEncoded) {
        valid = 0;
    }
    return valid;
}
