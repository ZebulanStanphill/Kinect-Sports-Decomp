int fn_82526B90(const unsigned char *a, const unsigned char *b)
{
    const unsigned char *p = a;
    unsigned int c1 = *p;
    unsigned int c2 = *b;
    if (c1 == c2) {
        int d = b - a;
        do {
            p++;
            if (c1 == 0) return 0;
            c1 = *p;
            c2 = p[d];
        } while (c1 == c2);
    }
    return c1 - c2;
}
