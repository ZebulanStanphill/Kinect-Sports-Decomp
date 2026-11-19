extern int fn_82C3C340(unsigned int width, unsigned int format, unsigned int a, int b);

/* Number of bytes per block row for an audio format; the 44.1 kHz stereo 32000-byte case is trimmed so the
   rounded-up block stays below 32000 bytes. */
unsigned short fn_82E38C18(unsigned int width, unsigned int height, unsigned int format, int depth,
                           unsigned int a, int b)
{
    __int64 blockSize;
    unsigned int blocks;
    unsigned int bits;

    if (format == 0x80) {
        return 1;
    }
    blockSize = (unsigned int)(fn_82C3C340(width, format, a, b) * depth);
    blocks = ((unsigned int)(((__int64)format * blockSize + width - 1) / width) + 7) >> 3;
    if (a == 2 && width == 44100 && height == 2 && format == 32000) {
        bits = blocks * 8;
        while ((((unsigned int)(((__int64)bits * width + blockSize - 1) / blockSize) + 7) & ~7) >= 32000) {
            bits -= 8;
            blocks--;
        }
    }
    return (unsigned short)blocks;
}
