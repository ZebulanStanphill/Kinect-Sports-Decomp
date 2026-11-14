typedef unsigned int size_t;

char *strncpy(char *dst, const char *src, size_t count)
{
    char *start = dst;

    while (count != 0 && (*dst++ = *src++) != 0)
        count--;
    if (count != 0) {
        while (--count != 0)
            *dst++ = 0;
    }
    return start;
}
