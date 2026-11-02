extern void *fn_8258BE68(void *p);
extern void *fn_8265C9E0(int n);
extern void *lbl_83281134;

void *fn_8258C000(void)
{
    if (lbl_83281134 == 0) {
        void *m = fn_8265C9E0(0x1010);
        void *p;
        if (m)
            p = fn_8258BE68(m);
        else
            p = 0;
        lbl_83281134 = p;
        return p;
    }
    return lbl_83281134;
}
