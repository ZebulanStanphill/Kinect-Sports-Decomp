int fn_82799A18(const unsigned short *a, unsigned int lenA, const unsigned short *b, unsigned int lenB,
                unsigned char prefix)
{
    if (lenA != 0) {
        int c1;
        int c2;
        int origB = (int)lenB;
        int origA = (int)lenA;

        do {
            c1 = (int)*a++;
            c2 = (int)*b++;
        } while (--lenA != 0 && c1 != 0 && c1 == c2 && --lenB != 0);
        if (c1 == c2 && lenB != 0 && (!prefix || lenA != 0)) {
            return origA - origB;
        }
        return c1 - c2;
    }
    return 0 - (int)lenB;
}
