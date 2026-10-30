extern void *fn_8289F350(void *a, void *c);
extern void *fn_82897BD0(void *r);
extern void fn_828BE158(void *a, void *b, void *c, void *d);

void fn_828BE208(void *a, void *b, void *c, void *d)
{
    void *r = fn_8289F350(a, c);
    if (r != 0) {
        fn_828BE158(a, b, fn_82897BD0(r), d);
    }
}
