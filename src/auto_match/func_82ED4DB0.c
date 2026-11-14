typedef int (*Compare_82ED4DB0)(const void *a, const void *b);

char *fn_82ED4DB0(char *a, char *b, char *c, Compare_82ED4DB0 cmp)
{
    return cmp(a, b) < 0
        ? (cmp(b, c) < 0 ? b : (cmp(a, c) < 0 ? c : a))
        : (cmp(b, c) > 0 ? b : (cmp(a, c) > 0 ? c : a));
}
