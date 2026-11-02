extern void *fn_824BCA38(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_83276748;

void *fn_824BC7E8(void)
{
    if (lbl_83276748 == 0) {
        void *m = fn_8265C9E0(0x550);
        void *p;
        if (m)
            p = fn_824BCA38(m);
        else
            p = 0;
        lbl_83276748 = p;
        return p;
    }
    return lbl_83276748;
}
