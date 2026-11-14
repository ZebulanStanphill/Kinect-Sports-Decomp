typedef struct Format_82A49B60 {
    char pad0[0xe];
    unsigned short bitsPerSample;   /* 0x0e */
} Format_82A49B60;

extern unsigned short fn_82A49AC8(Format_82A49B60 *format);
extern void *memset(void *dst, int value, unsigned int size);

void fn_82A49B60(void *buffer, unsigned int size, Format_82A49B60 *format)
{
    if (fn_82A49AC8(format) == 1 || fn_82A49AC8(format) == 3)
        memset(buffer, format->bitsPerSample == 8 ? 0x80 : 0, size);
    else
        memset(buffer, 0, size);
}
