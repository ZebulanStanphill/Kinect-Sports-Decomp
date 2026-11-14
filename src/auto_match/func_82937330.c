/* Find str in a pool of NUL-separated strings (*used bytes long) and return its offset;
   append it when it is not there. strcmp/strlen are inline (/Oi). */
int strcmp(const char *a, const char *b);
unsigned int strlen(const char *s);

extern void fn_82936290(char *dst, unsigned int size, const char *src);

int fn_82937330(const char *str, char *cur, unsigned int size, unsigned int *used)
{
    char *pool = cur;
    unsigned int left = *used;

    while (left != 0) {
        unsigned int len;
        if (strcmp(str, cur) == 0)
            return cur - pool;
        len = strlen(cur);
        left -= len + 1;
        cur += len + 1;
    }
    if (size <= 0x7fffffff)
        fn_82936290(cur, size, str);
    *used += strlen(str) + 1;
    return cur - pool;
}
