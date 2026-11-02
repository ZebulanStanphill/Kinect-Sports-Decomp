extern void *fn_8256C6F0(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_8327FBBC;

void *fn_8256BF18(void)
{
    if (lbl_8327FBBC == 0) {
        void *m = fn_8265C9E0(0xac);
        void *p;
        if (m)
            p = fn_8256C6F0(m);
        else
            p = 0;
        lbl_8327FBBC = p;
        return p;
    }
    return lbl_8327FBBC;
}
