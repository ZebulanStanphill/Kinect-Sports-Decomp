int fn_825207D0(const void *a, const void *b, unsigned int n)
{
    const unsigned __int64 *pa = (const unsigned __int64 *)a;
    const unsigned __int64 *pb = (const unsigned __int64 *)b;
    unsigned int i;
    for (i = 7; i < n; i += 8) {
        if (*pb != *pa)
            return 1;
        pa++;
        pb++;
    }
    for (i -= 7; i < n; i++) {
        if (((const unsigned char *)b)[i] != ((const unsigned char *)a)[i])
            return 1;
    }
    return 0;
}
