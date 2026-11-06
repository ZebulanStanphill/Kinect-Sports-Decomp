extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82F56810(void *self, void *a, void *b);
extern void *lbl_832627F0;
extern unsigned int lbl_832627F4;

void *fn_82F58A68(void)
{
    if ((lbl_832627F4 & 1) == 0) {
        void *m;
        char tmp[8];
        lbl_832627F4 |= 1;
        m = fn_8265C9E0(0x10);
        lbl_832627F0 = m ? (fn_82F56810(m, tmp, tmp), m) : 0;
    }
    return lbl_832627F0;
}
