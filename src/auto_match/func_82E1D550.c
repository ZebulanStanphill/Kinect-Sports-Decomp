extern void *fn_82E1D2A0(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_8323FDE8;

void *fn_82E1D550(void)
{
    if (lbl_8323FDE8 == 0) {
        void *m = fn_8265C9E0(0x28);
        void *p;
        if (m)
            p = fn_82E1D2A0(m);
        else
            p = 0;
        lbl_8323FDE8 = p;
        return p;
    }
    return lbl_8323FDE8;
}
