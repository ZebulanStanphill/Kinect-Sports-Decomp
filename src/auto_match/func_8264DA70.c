extern const unsigned short *fn_8264D808(unsigned int mode);

void fn_8264DA70(unsigned short *destination, const unsigned short *source, unsigned int mode)
{
    const unsigned short *table = fn_8264D808(mode);
    int index;
    for (index = 0; index < 256; index++) {
        destination[index] = table[source[index] >> 6] << 6;
        destination[index + 256] = table[source[index + 256] >> 6] << 6;
        destination[index + 512] = table[source[index + 512] >> 6] << 6;
    }
}
