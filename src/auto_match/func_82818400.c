unsigned int fn_82818400(const unsigned short *s)
{
    unsigned int c = *s;
    unsigned int h = 0;
    unsigned int g;

    while (c != 0) {
        s++;
        h = (h << 4) + c;
        g = h & 0xf0000000;
        if (g != 0) {
            h ^= g >> 24 | g;
        }
        c = *s;
    }
    return h;
}
