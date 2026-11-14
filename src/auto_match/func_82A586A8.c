typedef struct Format_82A586A8 {
    unsigned int rate;
    char pad4[3];
    unsigned char channels;     /* 0x07 */
} Format_82A586A8;

extern unsigned int fn_82A751F8(unsigned int bytes, unsigned int rate, int a, int b);

unsigned int fn_82A586A8(unsigned int bytes, int unused, Format_82A586A8 *fmt, int exact, int a, int b)
{
    unsigned int minimum = fmt->rate < 32000 ? 3 : 5;
    unsigned int size = fn_82A751F8(bytes, fmt->rate, a, b);

    if (size == 0)
        return 0;
    if (exact == 0 && bytes / (fmt->channels * size) < minimum)
        return bytes / (size * minimum);
    return fmt->channels;
}
