extern int fn_82CEE8F8(int a, void *b, void *c, void *d);
extern void *fn_82CFF638(void *a, void *b);

void fn_82CEE998(void *param_1, void *param_2)
{
    void *p;

    p = fn_82CFF638(param_2, param_1);
    if (p != 0) {
        fn_82CEE8F8(0, param_1, p, param_2);
    }
}
