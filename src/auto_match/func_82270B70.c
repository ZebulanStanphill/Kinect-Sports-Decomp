extern void *fn_82270BC8(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_832975C8;

void *fn_82270B70(void)
{
    if (lbl_832975C8 == 0) {
        void *m = fn_8265C9E0(0x2a0);
        void *p;
        if (m)
            p = fn_82270BC8(m);
        else
            p = 0;
        lbl_832975C8 = p;
        return p;
    }
    return lbl_832975C8;
}
