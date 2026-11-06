char *fn_82E17C80(char *base, int *offset)
{
    char *s = base + *offset;
    int n = 0;
    while (s[n] != 0) {
        n++;
    }
    n++;
    while ((n & 3) != 0) {
        n++;
    }
    *offset += n;
    return s;
}
