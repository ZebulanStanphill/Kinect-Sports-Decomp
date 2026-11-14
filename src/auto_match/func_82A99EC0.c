typedef struct Writer_82A99EC0 {
    char pad0[0x10];
    int length;
} Writer_82A99EC0;

void fn_82A99EC0(Writer_82A99EC0 *w, const char *text, int len)
{
    int n = 0;
    const char *p;
    for (p = text; p < text + len; p++) {
        char c = *p;
        if (c == '<')
            n += 4;
        else if (c == '>')
            n += 4;
        else if (c == '&')
            n += 5;
        else
            n += 1;
    }
    w->length += n;
}
