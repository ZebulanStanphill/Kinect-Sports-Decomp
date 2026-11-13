extern void *(*lbl_831751D0)(unsigned int size);
extern unsigned int fn_82F6D460(const char *str, unsigned int max);
extern int fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count);

char *fn_82BEC810(const char *str)
{
    unsigned int len;
    char *copy;

    if (str == 0)
        return 0;
    len = fn_82F6D460(str, 2000);
    copy = (char *)lbl_831751D0(len + 1);
    if (copy == 0)
        return 0;
    fn_82F66368(copy, len + 1, str, len);
    return copy;
}
