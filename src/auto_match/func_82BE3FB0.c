extern void fn_82BE2C50(void *p);
extern void fn_82BE8CF8(void *p);
extern void fn_82BE56C0(void *p);

void *fn_82BE3FB0(char *p, unsigned int flags)
{
    fn_82BE2C50(p);
    fn_82BE8CF8(p + 400);
    if (flags & 1) {
        fn_82BE56C0(p);
    }
    return p;
}
