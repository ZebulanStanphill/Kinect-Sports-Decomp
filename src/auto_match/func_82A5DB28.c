typedef struct WaveFormat_82A5DB28 {
    unsigned short formatTag;          /* 0x00 */
    unsigned short channels;           /* 0x02 */
    int samplesPerSec;                 /* 0x04 */
    int avgBytesPerSec;                /* 0x08 */
    unsigned short blockAlign;         /* 0x0c */
    unsigned short bitsPerSample;      /* 0x0e */
    unsigned short extraSize;          /* 0x10 */
    unsigned short validBitsPerSample; /* 0x12 */
} WaveFormat_82A5DB28;

int fn_82A5DB28(WaveFormat_82A5DB28 *format)
{
    int valid;
    unsigned short bits;
    unsigned short validBits;

    bits = format->bitsPerSample;
    valid = 1;
    if (bits != 8 && bits != 16 && bits != 24) {
        if (bits != 32) {
            valid = 0;
        }
    }
    if (format->formatTag == 0xfffe) {
        validBits = format->validBitsPerSample;
        if (validBits != 0 && validBits != 8 && validBits != 16 && validBits != 20 && validBits != 24) {
            if (validBits != 32) {
                valid = 0;
            }
        }
        if (validBits > bits) {
            valid = 0;
        }
    }
    if (format->blockAlign != (int)(format->channels * bits) / 8) {
        valid = 0;
    }
    if (format->avgBytesPerSec != format->samplesPerSec * format->blockAlign) {
        valid = 0;
    }
    return valid;
}
