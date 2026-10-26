extern void *fn_82B4BAA8(void *a, __int64 *b);
extern void fn_82AD1270(void *p, int n);

void *fn_82B4C380(void *a, __int64 b)
{
    void *r = fn_82B4BAA8(a, &b);
    fn_82AD1270(r, 2);
    return r;
}
