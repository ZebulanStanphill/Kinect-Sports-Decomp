static __forceinline unsigned short ToUpper(unsigned short c)
{
    if (c >= 'a' && c <= 'z') {
        c &= 0xffdf;
    }
    return c;
}

int fn_82F41CE0(const unsigned short *a, const unsigned short *b)
{
    while (*a != 0) {
        if (*a != *b && ToUpper(*a) != ToUpper(*b)) {
            break;
        }
        a++;
        b++;
    }
    return *a == 0 && *b == 0;
}
