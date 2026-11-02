extern void *fn_8245B248(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_83276590;

void *fn_8245B458(void)
{
    if (lbl_83276590 == 0) {
        void *m = fn_8265C9E0(0x720);
        void *p;
        if (m)
            p = fn_8245B248(m);
        else
            p = 0;
        lbl_83276590 = p;
        return p;
    }
    return lbl_83276590;
}
