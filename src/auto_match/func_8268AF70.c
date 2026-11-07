unsigned int fn_8268AF70(const unsigned char *s, unsigned int n, unsigned int h)
{
    int c;

    while (n != 0) {
        n--;
        c = s[n];
        if (c >= 0x41 && c <= 0x5a) {
            c += 0x20;
        }
        h = h * 0x21 ^ c;
    }
    return h;
}
