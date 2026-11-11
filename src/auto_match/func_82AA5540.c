extern int fn_82AA5208(void *a, unsigned b, void *c, int d, void *e, void *f);

int fn_82AA5540(void *a, unsigned b, void *c, int d, void *e)
{
    return fn_82AA5208(a, b, c, d, e, a);
}
