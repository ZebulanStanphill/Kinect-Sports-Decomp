extern void *fn_826BD078(unsigned int *it);

void *fn_8268ADD8(unsigned int *p, int n, unsigned int *out)
{
    void *r;
    unsigned int it = (*p & ~3u) + 8;
    do {
        r = fn_826BD078(&it);
        n--;
        if (r == 0) {
            return 0;
        }
    } while (n >= 0);
    *out = it;
    return r;
}
