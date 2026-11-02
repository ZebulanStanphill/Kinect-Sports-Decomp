extern void *fn_82811080(char *heap, int size, void *p);
extern void *fn_82811400(void *buf, int n);
extern void *fn_82874FC8(void);
extern void *lbl_83211724;
extern char lbl_832116F8[];

void *fn_82868758(void)
{
    unsigned char buf[32];
    if (lbl_83211724 == 0) {
        void *a = fn_82811400(buf, 4);
        void *r = fn_82811080(lbl_832116F8, 0x2c, a);
        lbl_83211724 = r != 0 ? fn_82874FC8() : 0;
    }
    return lbl_83211724;
}
