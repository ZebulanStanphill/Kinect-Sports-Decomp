extern void *fn_822929D0(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_83276530;

void *fn_82292AE8(void)
{
    if (lbl_83276530 == 0) {
        void *m = fn_8265C9E0(0x64);
        void *p;
        if (m)
            p = fn_822929D0(m);
        else
            p = 0;
        lbl_83276530 = p;
        return p;
    }
    return lbl_83276530;
}
