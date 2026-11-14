unsigned int strlen(const char *s);

extern int fn_826BCF78(unsigned short c);

int fn_82790270(const unsigned short *a, const char *b, unsigned int lenA)
{
    unsigned int origA;
    const char *origB;
    int c1;
    int c2;

    if (lenA != 0) {
        origA = lenA;
        origB = b;
        do {
            c1 = fn_826BCF78(*a++);
            c2 = fn_826BCF78(*b++);
            if (--lenA == 0 || c1 == 0) {
                break;
            }
            if (c1 != c2) {
                return c1 - c2;
            }
        } while (*b != 0);
        if (c1 == c2 && (lenA != 0 || *b != 0)) {
            return origA - strlen(origB);
        }
        return c1 - c2;
    }
    return -(int)strlen(b);
}
