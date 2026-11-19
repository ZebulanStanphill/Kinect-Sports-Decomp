typedef struct WaveFormat_82A5E128 {
    unsigned short formatTag;     /* 0x0 */
    unsigned short channels;      /* 0x2 */
    unsigned int samplesPerSec;   /* 0x4 */
    unsigned int avgBytesPerSec;  /* 0x8 */
    unsigned short blockAlign;    /* 0xc */
    unsigned short bitsPerSample; /* 0xe */
} WaveFormat_82A5E128;

extern unsigned short fn_82A5DAC0(WaveFormat_82A5E128 *format);
extern int fn_828F6FA8(char *buffer, unsigned int size, const char *format, ...);

void fn_82A5E128(WaveFormat_82A5E128 *format, char *buffer, unsigned int size)
{
    unsigned short tag = fn_82A5DAC0(format);
    const char *channels;
    const char *type;

    if (tag == 0x165) {
        fn_828F6FA8(buffer, size, "XMA1");
        return;
    }
    if (format->channels == 1) {
        channels = "Mono";
    } else if (format->channels == 2) {
        channels = "Stereo";
    } else if (format->channels == 3) {
        channels = "2.1";
    } else if (format->channels == 4) {
        channels = "Quad";
    } else if (format->channels == 5) {
        channels = "4.1";
    } else if (format->channels == 6) {
        channels = "5.1";
    } else if (format->channels == 7) {
        channels = "6.1";
    } else if (format->channels == 8) {
        channels = "7.1";
    } else {
        channels = "ManyChannels";
    }
    if (tag == 3) {
        type = "Float";
    } else if (tag == 2) {
        type = "Adpcm";
    } else if (tag == 0x166) {
        type = "XMA2";
    } else if (tag == 0x161) {
        type = "WMAStd";
    } else if (tag == 0x162) {
        type = "WMAPro";
    } else if (tag == 0x164) {
        type = "WMASpdif";
    } else if (tag == 0x92) {
        type = "AC3Spdif";
    } else if (tag != 1) {
        type = "Unknown";
    } else {
        if (format->bitsPerSample == 8) {
            type = "Pcm8Bit";
        } else if (format->bitsPerSample == 16) {
            type = "Pcm16Bit";
        } else if (format->bitsPerSample == 24) {
            type = "Pcm24Bit";
        } else if (format->bitsPerSample == 32) {
            type = "Pcm32Bit";
        } else {
            type = "BadBitsPerSample";
        }
    }
    fn_828F6FA8(buffer, size, "%luk%s%s", format->samplesPerSec / 1000, type, channels);
}
