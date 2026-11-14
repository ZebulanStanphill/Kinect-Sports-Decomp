static __forceinline char Upper(char c)
{
    if (c >= 'a' && c <= 'z')
        c &= ~0x20;
    return c;
}

int fn_82F41D68(const char *a, const char *b)
{
    while (*a != 0) {
        if (*a != *b && Upper(*a) != Upper(*b))
            break;
        a++;
        b++;
    }
    if (*a == 0 && 0 == *b)
        return 1;
    return 0;
}
