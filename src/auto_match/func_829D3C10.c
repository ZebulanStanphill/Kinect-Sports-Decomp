extern char *lbl_832179FC;
extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_829DBE78(void);
extern void fn_829DC340(int n);

void fn_829D3C10(void)
{
    if (*(void **)(lbl_832179FC + 0x8f4d8)) {
        fn_8265C990(*(void **)(lbl_832179FC + 0x8f4d8), 0x209d0000);
        *(void **)(lbl_832179FC + 0x8f4d8) = 0;
    }
    fn_829DBE78();
    fn_829DC340(0x14);
}
