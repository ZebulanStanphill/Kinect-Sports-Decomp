extern int fn_82A2B660(void *a, void *b, void *c, void *d);
int fn_82A1BC40(unsigned int kind, void *a, void *b, void *c, void *d)
{
    int r = 0;
    switch (kind) { case 0: case 1: r = fn_82A2B660(a, b, c, d); break; }
    return r;
}
