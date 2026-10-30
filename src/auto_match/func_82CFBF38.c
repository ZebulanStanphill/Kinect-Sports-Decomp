typedef unsigned int size_t;
extern size_t strlen(const char *s);
extern char *strncpy(char *d, const char *s, size_t n);
extern char *fn_82CE52E0(void *heap, int n);

char *fn_82CFBF38(const char *s, int max, void *heap)
{
    int len = strlen(s);
    char *r;
    if (len > max) len = max;
    r = fn_82CE52E0(heap, len + 1);
    if (len != 0) {
        strncpy(r, s, len);
    }
    r[len] = 0;
    return r;
}
