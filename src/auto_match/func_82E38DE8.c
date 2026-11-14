typedef struct Format_82E38DE8 {
    unsigned int rate;
    char pad4[3];
    unsigned char channels;     /* 0x07 */
} Format_82E38DE8;

extern unsigned int fn_82C3C340(unsigned int bytes, unsigned int rate, int a, int b);

unsigned int fn_82E38DE8(unsigned int bytes, int unused, Format_82E38DE8 *fmt, int exact, int a, int b)
{
    unsigned int minimum = fmt->rate < 32000 ? 3 : 5;
    unsigned int size = fn_82C3C340(bytes, fmt->rate, a, b);

    if (size == 0)
        return 0;
    if (exact == 0 && bytes / (fmt->channels * size) < minimum)
        return bytes / (size * minimum);
    return fmt->channels;
}
