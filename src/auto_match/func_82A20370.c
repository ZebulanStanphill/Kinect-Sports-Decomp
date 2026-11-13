int fn_82A20370(const char **cursor, unsigned int *remaining, char delimiter)
{
    const char *p = *cursor;
    unsigned int n = *remaining;
    while (n != 0) {
        char c = *p++;
        n--;
        if (c == delimiter) {
            *cursor = p;
            *remaining = n;
            return 1;
        }
    }
    return 0;
}
