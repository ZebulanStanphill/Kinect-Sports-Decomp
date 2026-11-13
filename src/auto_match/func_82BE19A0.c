extern void *(*lbl_831751D0)(unsigned int size);
extern unsigned int fn_82F6D460(const char *str, unsigned int max);
extern int fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count);

char *fn_82BE19A0(const char *str)
{
    unsigned int size;
    char *copy;

    if (str == 0)
        return 0;
    size = fn_82F6D460(str, 2000) + 1;
    copy = (char *)lbl_831751D0(size);
    if (copy == 0)
        return 0;
    fn_82F66368(copy, size, str, size - 1);
    return copy;
}
