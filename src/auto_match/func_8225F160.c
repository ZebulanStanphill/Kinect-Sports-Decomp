extern void *fn_8225F1B8(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_832975C0;

void *fn_8225F160(void)
{
    if (lbl_832975C0 == 0) {
        void *m = fn_8265C9E0(0x1cc);
        void *p;
        if (m)
            p = fn_8225F1B8(m);
        else
            p = 0;
        lbl_832975C0 = p;
        return p;
    }
    return lbl_832975C0;
}
