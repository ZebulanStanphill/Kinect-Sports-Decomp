extern unsigned int lbl_83298E80;
extern char lbl_83298E68[];
extern void fn_82520C90(void);
extern void fn_8313F4E8(void);
int atexit(void (*f)(void));

void *fn_82520C40(void)
{
    if ((lbl_83298E80 & 1) == 0) {
        lbl_83298E80 |= 1;
        fn_82520C90();
        atexit(fn_8313F4E8);
    }
    return lbl_83298E68;
}
