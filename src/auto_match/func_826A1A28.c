extern int fn_82F65B18(const char *s);

typedef struct Value_826A1A28 {
    const char *text;
} Value_826A1A28;

int fn_826A1A28(Value_826A1A28 **self)
{
    const char *s = (*self)->text;
    const char *p = s;
    char c = *p;
    while (c != 0 && c >= '0' && c <= '9')
        c = *++p;
    if (c != 0)
        return -1;
    return fn_82F65B18(s);
}
