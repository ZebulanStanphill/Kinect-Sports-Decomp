extern char *fn_82CFBEA0(const char *s, const char *sub);

int fn_82D04300(char **str, const char *sub)
{
    char *p;
    int last;

    last = -1;
    for (p = fn_82CFBEA0(*str, sub); p != 0; p = fn_82CFBEA0(p + 1, sub)) {
        last = p - *str;
    }
    return last;
}
