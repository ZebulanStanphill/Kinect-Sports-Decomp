extern void *fn_8265C9E0(int size);
extern void fn_828BDDA0(void *p);
extern char lbl_82024070[];
extern char lbl_82024078[];

void **fn_828A1168(void *param_1)
{
    void **p;

    p = (void **)fn_8265C9E0(0x80);
    if (p != 0) {
        fn_828BDDA0(p);
        p[8] = param_1;
        p[0] = lbl_82024078;
        p[0x14] = lbl_82024070;
        return p;
    }
    return 0;
}
