extern void fn_82F93768(char *, char);
extern void fn_82F93778(char *, void *);

char *fn_82661068(char *p, char *c, void *q)
{
    fn_82F93768(p, *c);
    fn_82F93778(p + 0xc, q);
    fn_82F93778(p + 0xd, q);
    return p;
}
