int fn_82824FF0(unsigned char *a, int n, unsigned char *b, int max)
{
    int i;

    for (i = 0; i < n; i++) {
        if (i >= max)
            break;
        if (a[i] != b[i])
            break;
    }
    return i;
}
