unsigned int fn_828183C0(const char *s)
{
    unsigned int h = 0;
    unsigned int g;
    char c;

    while ((c = *s) != 0) {
        s++;
        h = (h << 4) + c;
        g = h & 0xf0000000;
        if (g != 0) {
            h ^= g >> 24 | g;
        }
    }
    return h;
}
