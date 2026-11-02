extern void *fn_82811080(char *heap, int size, void *p);
extern void *fn_82811400(void *buf, int n);
extern void *fn_82867E68(void);
extern void *lbl_832116F4;
extern char lbl_832116F8[];

void *fn_82865170(void)
{
    unsigned char buf[32];
    if (lbl_832116F4 == 0) {
        void *a = fn_82811400(buf, 4);
        void *r = fn_82811080(lbl_832116F8, 0x4e4, a);
        lbl_832116F4 = r != 0 ? fn_82867E68() : 0;
    }
    return lbl_832116F4;
}
