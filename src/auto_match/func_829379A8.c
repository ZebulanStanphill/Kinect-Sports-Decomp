/* strsafe StringCchCatA: length of dst, then StringCchCopyA (fn_82936290) behind it. */
extern int fn_829362F0(char *dst, unsigned int cch, unsigned int *length);
extern int fn_82936290(char *dst, unsigned int cch, const char *src);

int fn_829379A8(char *dst, unsigned int cch, const char *src)
{
    unsigned int length;
    int hr;

    if (cch > 0x7fffffff)
        return 0x80070057;
    hr = fn_829362F0(dst, cch, &length);
    if (hr < 0)
        return hr;
    return fn_82936290(dst + length, cch - length, src);
}
