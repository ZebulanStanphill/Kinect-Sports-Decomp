// CRT wcsncpy (same shape as strncpy, func_82F672D8, on 16-bit characters).
typedef unsigned int size_t;
typedef unsigned short wchar_t;

wchar_t *fn_82F6FDB0(wchar_t *dst, const wchar_t *src, size_t count)
{
    wchar_t *start = dst;

    while (count != 0 && (*dst++ = *src++) != 0)
        count--;
    if (count != 0) {
        while (--count != 0)
            *dst++ = 0;
    }
    return start;
}
