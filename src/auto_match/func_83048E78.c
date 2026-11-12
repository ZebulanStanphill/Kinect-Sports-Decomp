unsigned int fn_83048E78(unsigned char *data, unsigned int size, unsigned int packet, unsigned int frame,
                         unsigned int *frames)
{
    unsigned char *p;
    unsigned char *end;
    unsigned int n;
    unsigned int bit;
    unsigned int i;
    unsigned int byte;
    unsigned int shift;
    unsigned int len;

    *frames = 0;
    p = data + packet * 0x800;
    end = data + size;
    while (p + 0x800 <= end) {
        n = (p[0] >> 2) + *frames;
        if (n > frame) {
            i = frame - *frames;
            *frames = frame;
            bit = ((((p[0] & 3) << 8) | p[1]) << 5 | (p[2] >> 3)) + 0x20;
            for (; i != 0; i--) {
                byte = bit >> 3;
                shift = bit & 7;
                if (shift < 2) {
                    len = ((unsigned int)((p[byte] << 8) | p[byte + 1]) >> (1 - shift)) & 0x7fff;
                } else {
                    len = ((unsigned int)((((p[byte] << 8) | p[byte + 1]) << 8) | p[byte + 2]) >> (9 - shift)) & 0x7fff;
                }
                bit += len;
            }
            return (p - data) * 8 + bit;
        }
        *frames = n;
        p += (p[3] + 1) * 0x800;
    }
    return 0;
}
