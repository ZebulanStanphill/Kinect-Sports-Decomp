extern void fn_82F93768(void *, unsigned char);
extern void fn_82F93778(void *, unsigned char *);

void *fn_82669730(char *p, unsigned char *a, unsigned char b)
{
    fn_82F93768(p, *a);
    fn_82F93778(p + 0xc, &b);
    return p;
}
