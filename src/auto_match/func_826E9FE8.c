extern void *fn_8267B890(unsigned int heap, unsigned int size, unsigned int flags);
extern void *fn_826E9EB0(void *obj, int a, int b, int c);
extern unsigned int lbl_831E7E64;

void *fn_826E9FE8(int param_1, int param_2, int param_3)
{
    void *p;

    p = fn_8267B890(lbl_831E7E64, 0x20, 0);
    if (p != 0) {
        return fn_826E9EB0(p, param_1, param_2, param_3);
    }
    return 0;
}
