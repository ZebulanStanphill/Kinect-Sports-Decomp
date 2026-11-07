unsigned int fn_828F5390(void *self, const char *s)
{
    unsigned int h = 0x632d80f;
    if (s == 0 || *s == 0) {
        return 0;
    }
    while (*s != 0) {
        h = h * 19 + *s;
        s++;
    }
    return h % 127;
}
