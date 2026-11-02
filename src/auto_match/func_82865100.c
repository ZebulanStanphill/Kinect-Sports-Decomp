extern void *fn_82811080(char *heap, int size, void *p);
extern void *fn_82811400(void *buf, int n);
extern void *fn_82865ED0(void);
extern void *lbl_832116F0;
extern char lbl_832116F8[];

void *fn_82865100(void)
{
    unsigned char buf[32];
    if (lbl_832116F0 == 0) {
        void *a = fn_82811400(buf, 4);
        void *r = fn_82811080(lbl_832116F8, 0x4, a);
        lbl_832116F0 = r != 0 ? fn_82865ED0() : 0;
    }
    return lbl_832116F0;
}
