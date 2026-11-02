extern void *fn_822743D8(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_832975CC;

void *fn_82275128(void)
{
    if (lbl_832975CC == 0) {
        void *m = fn_8265C9E0(0x74);
        void *p;
        if (m)
            p = fn_822743D8(m);
        else
            p = 0;
        lbl_832975CC = p;
        return p;
    }
    return lbl_832975CC;
}
