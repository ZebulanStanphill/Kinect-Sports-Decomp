extern void *fn_82811080(char *heap, int size, void *p);
extern void *fn_82811400(void *buf, int n);
extern void *fn_82870C10(void);
extern void *lbl_83211714;
extern char lbl_832116F8[];

void *fn_828684F8(void)
{
    unsigned char buf[32];
    if (lbl_83211714 == 0) {
        void *a = fn_82811400(buf, 4);
        void *r = fn_82811080(lbl_832116F8, 0x14, a);
        lbl_83211714 = r != 0 ? fn_82870C10() : 0;
    }
    return lbl_83211714;
}
