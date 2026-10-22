unsigned char fn_82B43A78(unsigned int *a, unsigned int *b)
{
    unsigned int *p = (unsigned int *)*a;
    unsigned int *it;
    unsigned int *end;
    unsigned int *q;

    if ((~(unsigned int)p & 1) == 0) {
        return (unsigned int)p == *b;
    }
    it = p + 1;
    q = (unsigned int *)*b + 1;
    end = p + *p + 1;
    for (; it < end; it++, q++) {
        if (*it != *q) {
            return 0;
        }
    }
    return 1;
}
