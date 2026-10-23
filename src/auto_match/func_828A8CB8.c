extern void *fn_8265C9E0(int size);
extern void fn_82895048(void *p, void *a, int b);
extern char lbl_8202439C[];

void **fn_828A8CB8(void *param_1)
{
    void **p;

    p = (void **)fn_8265C9E0(0x68);
    if (p != 0) {
        fn_82895048(p, param_1, 0);
        p[0] = lbl_8202439C;
        *(void ***)((char *)p[4] + 0x2c8) = p;
        return p;
    }
    return 0;
}
