typedef void (*atexit_fn)(void);
extern int atexit(atexit_fn f);
extern void fn_8313F010(void);
extern void fn_8287C738(void *p);
extern char lbl_821C2320[];
extern void *lbl_83297974;
extern unsigned int lbl_8329797C;

void *fn_825089A0(void)
{
    if ((lbl_8329797C & 1) == 0) {
        lbl_8329797C = lbl_8329797C | 1;
        fn_8287C738(&lbl_83297974);
        lbl_83297974 = lbl_821C2320;
        atexit(fn_8313F010);
    }
    return &lbl_83297974;
}
