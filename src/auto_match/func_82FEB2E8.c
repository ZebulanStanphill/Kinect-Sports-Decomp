extern void *fn_82FE89F8(int key);
extern int fn_82FEB1D0(void *h, int a, int b);

int fn_82FEB2E8(int key, int a, int b)
{
    void *h = fn_82FE89F8(key);
    if (h == 0) {
        return 0xf;
    }
    return fn_82FEB1D0(h, a, b);
}
