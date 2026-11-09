extern void fn_82F93768(char *, char);
extern void fn_82F93778(char *, void *);

char *fn_82F936E0(char *p, char *c, void *q)
{
    fn_82F93768(p, *c);
    fn_82F93778(p + 1, q);
    return p;
}
