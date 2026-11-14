unsigned int strlen(const char *s);

static __forceinline int ToLower(int c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 0x20;
    }
    return c;
}

int fn_8268AE58(const char *a, const char *b, int len)
{
    int origLen;
    const char *origB;
    int c1;
    int c2;

    if (len != 0) {
        origLen = len;
        origB = b;
        do {
            c1 = ToLower(*a++);
            c2 = ToLower(*b++);
            if (--len == 0 || c1 == 0) {
                break;
            }
            if (c1 != c2) {
                return c1 - c2;
            }
        } while (*b != 0);
        if (c1 == c2 && (len != 0 || *b != 0)) {
            return origLen - strlen(origB);
        }
        return c1 - c2;
    }
    return -(int)strlen(b);
}
