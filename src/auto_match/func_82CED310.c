extern unsigned int fn_82CFBE40(const char *s);

unsigned int fn_82CED310(unsigned int *p)
{
    const char *s = (const char *)(*p & ~1u);
    if (s != 0)
        return fn_82CFBE40(s);
    return 0;
}
