extern int fn_826BCF78(unsigned short c);

int fn_82790D60(const unsigned short *a, unsigned int lenA, const unsigned short *b, unsigned int lenB)
{
    unsigned int origA;
    unsigned int origB;
    int c1;
    int c2;

    if (lenA != 0) {
        origB = lenB;
        origA = lenA;
        do {
            c1 = fn_826BCF78(*a++);
            c2 = fn_826BCF78(*b++);
            if (--lenA == 0 || c1 == 0) {
                break;
            }
            if (c1 != c2) {
                return c1 - c2;
            }
        } while (--lenB != 0);
        if (c1 == c2 && (lenA != 0 || lenB != 0)) {
            return origA - origB;
        }
        return c1 - c2;
    }
    return -lenB;
}
