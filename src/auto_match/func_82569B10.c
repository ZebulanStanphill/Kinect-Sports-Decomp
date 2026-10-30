extern unsigned int lbl_83297BB4;
extern char lbl_83297A48[];
extern void fn_82569B60(void);
extern void fn_8313F650(void);
int atexit(void (*f)(void));

void *fn_82569B10(void)
{
    if ((lbl_83297BB4 & 1) == 0) {
        lbl_83297BB4 |= 1;
        fn_82569B60();
        atexit(fn_8313F650);
    }
    return lbl_83297A48;
}
