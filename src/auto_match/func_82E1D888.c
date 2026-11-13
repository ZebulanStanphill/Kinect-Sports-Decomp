typedef unsigned int size_t;
extern size_t strlen(const char *s);
extern char *strchr(const char *s, int c);

const char *fn_82E1D888(void *self, const char *str, char ch)
{
    const char *p;
    int len;

    if (str != 0) {
        p = strchr(str, ch);
        len = (int)strlen(str);
        if (p != 0 && p - str > 0 && p - str < len)
            return p;
    }
    return 0;
}
