extern void *memcpy(void *, const void *, unsigned int);
extern int fn_82AC3438(unsigned int, unsigned int, unsigned int, unsigned int, const char *);

int fn_82AC3770(unsigned int a, unsigned int b, unsigned int c, unsigned int d, const char *text)
{
    struct Text_82AC3770 {
        char data[9];
    } local;

    char *buf = local.data;
    char *p;
    int i;
    if (!text)
        return 0x80004005;
    local = *(const struct Text_82AC3770 *)text;
    if (buf[0] == '"')
        return 0x80004005;
    i = 0;
    p = buf;
    do {
        if (i >= 8)
            return 0x80004005;
        *p = p[1];
        p++;
    } while (buf[++i] != '"');
    for (; i < 9; i++)
        buf[i] = 0;
    return fn_82AC3438(a, b, c, d, buf);
}
