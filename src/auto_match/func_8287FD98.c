extern int atexit(void (*f)(void));
extern void *fn_8287FCD0(void *self);
extern void fn_831406D8(void);
extern unsigned int lbl_832119C0;
extern char lbl_832118A0[];

void *fn_8287FD98(void)
{
    if ((lbl_832119C0 & 1) == 0) {
        lbl_832119C0 |= 1;
        fn_8287FCD0(lbl_832118A0);
        atexit(fn_831406D8);
    }
    return lbl_832118A0;
}
