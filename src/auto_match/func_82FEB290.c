extern void *fn_82FE8948(int key);
extern int fn_82FEB1D0(void *h, int a, int b);

int fn_82FEB290(int key, int a, int b)
{
    void *h = fn_82FE8948(key);
    if (h == 0) {
        return 0xf;
    }
    return fn_82FEB1D0(h, a, b);
}
