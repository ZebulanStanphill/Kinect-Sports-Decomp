extern char *fn_829E0C20(void *a, unsigned short b);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int n);
int fn_829E0CA0(char *dst, void *a, unsigned short b)
{
    char *p;
    if (b == 0)
        return 0x80004005;
    p = fn_829E0C20(a, b);
    if (p == 0)
        return 0x80004005;
    fn_82A1DDC0(dst, p + 8, 2000);
    fn_82A1DDC0(dst + 2000, p + 0x7d8, 4);
    return 0;
}
