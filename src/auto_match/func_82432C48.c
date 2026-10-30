extern unsigned int lbl_83297D54;
extern char lbl_83297D3C[];
extern void fn_82438248(void);
extern void fn_8313DA38(void);
int atexit(void (*f)(void));

void *fn_82432C48(void)
{
    if ((lbl_83297D54 & 1) == 0) {
        lbl_83297D54 |= 1;
        fn_82438248();
        atexit(fn_8313DA38);
    }
    return lbl_83297D3C;
}
