extern void *fn_82BE6FA0(void *p);
extern void *fn_82BE56B0(int n);
extern void *lbl_8322B1D8;

void *fn_82BE7068(void)
{
    if (lbl_8322B1D8 == 0) {
        void *m = fn_82BE56B0(0x64);
        void *p;
        if (m)
            p = fn_82BE6FA0(m);
        else
            p = 0;
        lbl_8322B1D8 = p;
        return p;
    }
    return lbl_8322B1D8;
}
